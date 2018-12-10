
#ifndef Arraysh
#define Arraysh

#if defined(SPEC_CPU)
#include <string.h>
#endif

template <class eobj>	class flexarray
{
		public:

		eobj* ep;

 	i32 elemqu;
		i32 maxelemqu;


  bool isinclude(const eobj& elem);

		void add(const eobj& e);
		eobj* add();
  void remove(const eobj& e);

  void iselemqu(i32 requiredelemqu, bool flcopy);

  void enlarge(i32 addendelemqu);

		void doubling(bool flcopy);

		void clear();

		inline	eobj& operator []	(i32 index)
		{
				return ep[index];
		}

		void create(i32 maxelemquin);
		void destroy();
};


template <class eobj> class flexstack
{
		public:

		eobj* ep;

		i32 elemqu;
		i32 maxelemqu;

		eobj get();
		void put(eobj elem);

  inline bool isempty();

		void doubling();
		void clear();
		inline void create(i32 maxelemquin);
		void destroy();
};


template <class eobj>	class smallsolidarray
{
		public:

		eobj* ep;

		flexstack <i16> freecellholder;
		flexarray <i16> dccellar,rccellar;

 	i32 elemqu;
		i32 maxelemqu;

  eobj& elem(i16 ecellnum);
  bool isinclude(const eobj& e);

		i16 add(const eobj& e);
		i16 add();
		void remove(i16 ecellnum);

		void doubling();

		void clear();

		inline	eobj& operator []	(i16 index)
		{
				return ep[index];
		}

		inline	eobj& operator []	(i32 index)
		{
				return ep[index];
		}

		void create(i32 maxelemquin);
		void destroy();
};

template <class eobj>	class largesolidarray
{
		public:

		eobj* ep;

		flexstack <i32> freecellholder;
		flexarray <i32> dccellar,rccellar;

 	i32 elemqu;
		i32 maxelemqu;

  eobj& elem(i32 ecellnum);
  bool isinclude(const eobj& e);

		i32 add(const eobj& e);
		i32 add();
		void remove(i32 ecellnum);

		void doubling();

		void clear();

		inline	eobj& operator []	(i32 index)
		{
				return ep[index];
		}
  		
		void create(i32 maxelemquin);
		void destroy();
};


template <class eobj> class	extendarray
{
		public:

		struct elemdescrt;
		typedef elemdescrt*	elemdescrpt;
		struct	elemdescrt
		{
				eobj* ep;
				i32 nextednum,predednum;
//				i32 elempcellnum;
		};

//		flexarray <eobj*>	epar;
		flexarray	<elemdescrt> freeedar;
		flexarray <eobj*> emempar;

		i32 firstfreecell,lastfreecell;
  i32 firstusedcell,lastusedcell;

		i32 elemqu;
		i32 maxelemqu;
		i32 initialelelmqu;
		i32 align;
		i32 doublingqu;

		eobj* allocate(i32& elemdescrindex);
		void unallocate(i32 elemdescrindex);

		void doubling();

//		inline	eobj operator []	(i32 index)
//		{
//				return ep[index];
//		}

  void clear();

		void	create(i32 elemquin, i32 alignin);
		void destroy();
};


template <class eobj> class container
{
  public:

  flexstack <eobj*> stack;
  flexstack <eobj*> usedstack;

  inline eobj* get();

  void init();

  void create(i32 maxelemqu);
  void destroy();
};


template <class eobj> class holder
{
  public:

  flexarray <eobj*> par;
  i32 blocknum;
  i32 cursize;
  i32 blocksize;
  i32 align;
  
  inline eobj* allocate(i32 maxsize, i32 increment=0);
  inline void increment(i32 size);

  void clear(); 

  void create(i32 blocksize, i32 align);
  void destroy();
};


void* alignpointer(void* p, i32 align);

inline void* _aligned_malloc(i32 size, i32 align)
{
  return malloc(size);
}

inline void _aligned_free(void* p)
{
  free(p);
}

//=====================================================================
//=====================================================================

template <class eobj> bool flexarray <eobj>::isinclude(const eobj& e)
{
  i32 i;

  for (i=0; i<elemqu; i++)
    if (ep[i]==e)
      return true;

  return false;
}


template <class eobj> inline void flexarray <eobj>::add(const eobj& e)
{
		if (elemqu==maxelemqu) doubling(true);

		ep[elemqu]=e;

		elemqu++;
}

template <class eobj> inline eobj* flexarray <eobj>::add()
{
		if (elemqu==maxelemqu) doubling(true);

		elemqu++;

  return ep+elemqu-1;
}

template <class eobj> void flexarray <eobj>::remove(const eobj& e)
{
  i32 i;

  for (i=0; i<elemqu; i++)
    if (ep[i]==e)
    {
      ep[i]=ep[elemqu-1];
      elemqu--;
      return;
    }
}


template <class eobj> void flexarray <eobj>::iselemqu(i32 requiredelemqu, bool flcopy)
{
  while (flexarray::maxelemqu<requiredelemqu) doubling(flcopy);
}

template <class eobj> void flexarray <eobj>::enlarge(i32 addendelemqu)
{
		eobj* newep;
		i32 newelemqu;


		newelemqu=maxelemqu+addendelemqu;

  newep=(eobj*)_aligned_malloc((i32)(newelemqu*sizeof(eobj)),(i32)16);

		memcpy(newep,ep,maxelemqu*sizeof(eobj));

		_aligned_free(ep);
		ep=newep;
		maxelemqu=newelemqu;
}

template <class eobj> void flexarray <eobj>::doubling(bool flcopy)
{
		eobj* newep;
		i32 newelemqu;


		newelemqu=maxelemqu<<1;

  newep=(eobj*)_aligned_malloc((i32)(newelemqu*sizeof(eobj)),(i32)16);

  if (flcopy)
  		memcpy(newep,ep,maxelemqu*sizeof(eobj));

		_aligned_free(ep);
		ep=newep;
		maxelemqu=newelemqu;
}

template <class eobj> inline void flexarray <eobj>::clear()
{
		elemqu=0;
}

template <class eobj> inline void flexarray <eobj>::create(i32 maxelemquin)
{
		maxelemqu=maxelemquin;
		elemqu=0;
		ep=(eobj*)_aligned_malloc( (i32) (maxelemqu*sizeof(eobj)),(i32) 16);
}

template <class eobj> inline void flexarray <eobj>::destroy()
{
		_aligned_free(ep);
}

//=====================================================================
//=====================================================================

template <class eobj> inline eobj flexstack <eobj>::get()
{
		elemqu--;

		return ep[elemqu];
}

template <class eobj> inline	void flexstack <eobj>::put(eobj elem)
{
		if (elemqu==maxelemqu) doubling();

		ep[elemqu]=elem;
		elemqu++;
}

template <class eobj> inline bool flexstack <eobj>::isempty()
{
  return (elemqu==0);
}

template <class eobj> inline	void flexstack <eobj>::doubling()
{
		eobj* newep;
		i32 newelemqu;


		newelemqu=maxelemqu<<1;

		newep=(eobj*)malloc(newelemqu*sizeof(eobj));

		memcpy(newep,ep,maxelemqu*sizeof(eobj));

		free(ep);
		ep=newep;
		maxelemqu=newelemqu;
}

template <class eobj> void flexstack <eobj>::clear()
{
		elemqu=0;
}

template <class eobj> void flexstack <eobj>::create(i32 maxelemquin)
{
		maxelemqu=maxelemquin;
		elemqu=0;
		ep=(eobj*)malloc(maxelemqu*sizeof(eobj));
}

template <class eobj> void flexstack <eobj>::destroy()
{
		free(ep);
}

//=====================================================================
//=====================================================================

template <class eobj> eobj& smallsolidarray <eobj>::elem(i16 ecellnum)
{
		i16 removecell;

		removecell=dccellar.ep[ecellnum];

  return ep[removecell];
}

template <class eobj> bool smallsolidarray <eobj>::isinclude(const eobj& e)
{
  i32 i;

  for (i=0; i<elemqu; i++)
    if (ep[i]==e)
      return true;

  return false;
}

template <class eobj> inline i16 smallsolidarray <eobj>::add(const eobj& e)
{
		i32 elemcell;

		if (elemqu==maxelemqu) doubling();


		ep[elemqu]=e;

		elemcell=freecellholder.get();

		dccellar.ep[elemcell]=elemqu;
		rccellar.ep[elemqu]=elemcell;
		elemqu++;

		return elemcell;
}

template <class eobj> inline i16 smallsolidarray <eobj>::add()
{
		i32 elemcell;

		if (elemqu==maxelemqu) doubling();


		elemcell=freecellholder.get();

		dccellar.ep[elemcell]=elemqu;
		rccellar.ep[elemqu]=elemcell;
		elemqu++;

		return elemcell;
}

template <class eobj> void smallsolidarray <eobj>::remove(i16 ecellnum)
{
		i16 removecell;

		removecell=dccellar.ep[ecellnum];

		if (removecell!=elemqu-1)
		{
				ep[removecell]=ep[elemqu-1];

				dccellar.ep[rccellar.ep[elemqu-1]]=removecell;
				rccellar.ep[removecell]=rccellar.ep[elemqu-1];
		}

		freecellholder.put(ecellnum);

		elemqu--;
}

//=====================================================================

template <class eobj> void smallsolidarray <eobj>::doubling()
{
		eobj* newep;
		i32 newmaxelemqu;
		i32 i;


		newmaxelemqu=maxelemqu<<1;

		newep=(eobj*)malloc(newmaxelemqu*sizeof(eobj));

		memcpy(newep,ep,maxelemqu*sizeof(eobj));

		free(ep);
		ep=newep;

		dccellar.doubling(true);
		rccellar.doubling(true);

		for	(i=maxelemqu; i<newmaxelemqu; i++)
				freecellholder.put(i);

		maxelemqu=newmaxelemqu;
}

template <class eobj> inline void smallsolidarray <eobj>::clear()
{
  i32 i;

		elemqu=0;
  freecellholder.clear();
		for	(i=0; i<maxelemqu; i++)
				freecellholder.put(i);
}

template <class eobj> void smallsolidarray <eobj>::create(i32 maxelemquin)
{
		i32 i;


		maxelemqu=maxelemquin;
		elemqu=0;
		ep=(eobj*)malloc(maxelemqu*sizeof(eobj));
		dccellar.create(maxelemqu);
		rccellar.create(maxelemqu);
		freecellholder.create(maxelemqu);

		for	(i=0; i<maxelemqu; i++)
				freecellholder.put(i);
}

template <class eobj> inline void smallsolidarray <eobj>::destroy()
{
		rccellar.destroy();
		dccellar.destroy();
		freecellholder.destroy();
		free(ep);
}

//=====================================================================

template <class eobj> eobj& largesolidarray <eobj>::elem(i32 ecellnum)
{
		i32 removecell;

		removecell=dccellar.ep[ecellnum];

  return ep[removecell];
}

template <class eobj> bool largesolidarray <eobj>::isinclude(const eobj& e)
{
  i32 i;

  for (i=0; i<elemqu; i++)
    if (ep[i]==e)
      return true;

  return false;
}

template <class eobj> inline i32 largesolidarray <eobj>::add(const eobj& e)
{
		i32 elemcell;

		if (elemqu==maxelemqu) doubling();


		ep[elemqu]=e;

		elemcell=freecellholder.get();

		dccellar.ep[elemcell]=elemqu;
		rccellar.ep[elemqu]=elemcell;
		elemqu++;

		return elemcell;
}

template <class eobj> inline i32 largesolidarray <eobj>::add()
{
		i32 elemcell;

		if (elemqu==maxelemqu) doubling();


		elemcell=freecellholder.get();

		dccellar.ep[elemcell]=elemqu;
		rccellar.ep[elemqu]=elemcell;
		elemqu++;

		return elemcell;
}

template <class eobj> void largesolidarray <eobj>::remove(i32 ecellnum)
{
		i32 removecell;

		removecell=dccellar.ep[ecellnum];

		if (removecell!=elemqu-1)
		{
				ep[removecell]=ep[elemqu-1];

				dccellar.ep[rccellar.ep[elemqu-1]]=removecell;
				rccellar.ep[removecell]=rccellar.ep[elemqu-1];
		}

		freecellholder.put(ecellnum);

		elemqu--;
}

//=====================================================================

template <class eobj> void largesolidarray <eobj>::doubling()
{
		eobj* newep;
		i32 newmaxelemqu;
		i32 i;


		newmaxelemqu=maxelemqu<<1;

		newep=(eobj*)malloc(newmaxelemqu*sizeof(eobj));

		memcpy(newep,ep,maxelemqu*sizeof(eobj));

		free(ep);
		ep=newep;

		dccellar.doubling(true);
		rccellar.doubling(true);

		for	(i=maxelemqu; i<newmaxelemqu; i++)
				freecellholder.put(i);

		maxelemqu=newmaxelemqu;
}

template <class eobj> inline void largesolidarray <eobj>::clear()
{
  i32 i;

		elemqu=0;
  freecellholder.clear();
		for	(i=0; i<maxelemqu; i++)
				freecellholder.put(i);
}

template <class eobj> void largesolidarray <eobj>::create(i32 maxelemquin)
{
		i32 i;


		maxelemqu=maxelemquin;
		elemqu=0;
		ep=(eobj*)malloc(maxelemqu*sizeof(eobj));
		dccellar.create(maxelemqu);
		rccellar.create(maxelemqu);
		freecellholder.create(maxelemqu);

		for	(i=0; i<maxelemqu; i++)
				freecellholder.put(i);
}

template <class eobj> inline void largesolidarray <eobj>::destroy()
{
		rccellar.destroy();
		dccellar.destroy();
		freecellholder.destroy();
		free(ep);
}

//=====================================================================
//=====================================================================

template <class	eobj>	eobj* extendarray <eobj>::allocate(i32& elemdescrindex)
{
		elemdescrpt elemdp;
		i32	elemdnum;
		i32	elempcellnum;


		if (elemqu==maxelemqu-1) doubling();

		elemdnum=firstfreecell;
		elemdp=&(freeedar.ep[firstfreecell]);

		firstfreecell=elemdp->nextednum;

//		elempcellnum=elemqu;
//		epar.ep[elempcellnum]=elemdp->ep;

//		elemdp->elempcellnum=elempcellnum;
		elemdescrindex=elemdnum;


  if (lastusedcell!=-1)
  {
    freeedar[lastusedcell].nextednum=elemdnum;
  }

  elemdp->predednum=lastusedcell;
  elemdp->nextednum=-1;

  lastusedcell=elemdnum;

		elemqu++;

		return elemdp->ep;
}

template <class	eobj>	void extendarray <eobj>::unallocate(i32 elemdescrindex)
{
		elemdescrpt elemdp;
		i32 elemdnum;
		i32 elempcellnum;


		elemdnum=elemdescrindex;
		elemdp=&(freeedar.ep[elemdnum]);


  if (elemdp->nextednum!=-1)
    freeedar.ep[elemdp->nextednum].predednum=elemdp->predednum;
  else
    lastusedcell=elemdp->predednum;

  if (elemdp->predednum!=-1)
    freeedar.ep[elemdp->predednum].nextednum=elemdp->nextednum;


		freeedar[firstfreecell].predednum=elemdnum;
		elemdp->nextednum=firstfreecell;
		firstfreecell=elemdnum;


/*
		if (elempcellnum!=elemqu-1)
		{
				epar.ep[elempcellnum]=epar[elemqu-1];

				moveelemdp=&(freeedar[ ((i32pt)(epar[elemqu-1]))[0] ]);

				moveelemdp->elempcellnum=elempcellnum;
		}
*/

		elemqu--;
}


template <class	eobj>	void extendarray <eobj>::doubling()
{
		eobj*	earp;
		i32 newmaxelemqu;
		i32 i;


		doublingqu++;
		newmaxelemqu=maxelemqu<<1;

		freeedar.doubling(true);
//		epar.doubling();

		earp=(eobj*)malloc(maxelemqu*sizeof(eobj)+2*align);
		emempar.add(earp);
		if (align!=0)
				earp=(eobj*)alignpointer(earp,align);


		freeedar[maxelemqu].ep=&(earp[0]);
		freeedar[maxelemqu].nextednum=maxelemqu+1;
		freeedar[maxelemqu].predednum=lastfreecell;

		for (i=maxelemqu+1; i<newmaxelemqu-1; i++)
		{
				freeedar[i].ep=&(earp[i-maxelemqu]);
				freeedar[i].nextednum=i+1;
				freeedar[i].predednum=i-1;
		}

		freeedar[newmaxelemqu-1].ep=&(earp[maxelemqu-1]);
		freeedar[newmaxelemqu-1].nextednum=-1;
		freeedar[newmaxelemqu-1].predednum=newmaxelemqu-2;


		freeedar[lastfreecell].nextednum=maxelemqu;


		maxelemqu=newmaxelemqu;
		lastfreecell=maxelemqu-1;
}


template <class	eobj>	void extendarray <eobj>::clear()
{
  i32 oldmaxelemqu,oldalign;

  oldmaxelemqu=maxelemqu;
  oldalign=align;

  destroy();
  create(oldmaxelemqu,oldalign);
}

template <class	eobj>	void extendarray <eobj>::create(i32 elemquin, i32 alignin)
{
		eobj*	earp;
		i32 i;


		maxelemqu=elemquin;
		elemqu=0;

		doublingqu=0;

		align=alignin;

		freeedar.create(maxelemqu);
//		epar.create(maxelemqu);
		emempar.create(4);

		earp=(eobj*)malloc(maxelemqu*sizeof(eobj)+2*align);
		emempar.add(earp);

		if (align!=0)
				earp=(eobj*)alignpointer(earp,align);

		freeedar.ep[0].ep=&(earp[0]);
		freeedar.ep[0].nextednum=1;
		freeedar.ep[0].predednum=-1;

		for (i=1; i<maxelemqu-1; i++)
		{
				freeedar[i].ep=&(earp[i]);
				freeedar[i].nextednum=i+1;
				freeedar[i].predednum=i-1;
		}
                             
		freeedar[maxelemqu-1].ep=&(earp[maxelemqu-1]);
		freeedar[maxelemqu-1].nextednum=-1;
		freeedar[maxelemqu-1].predednum=maxelemqu-2;

		firstfreecell=0;
		lastfreecell=maxelemqu-1;

  firstusedcell=-1;
  lastusedcell=-1;
}

template <class	eobj>	void extendarray <eobj>::destroy()
{
		i32 i;

		for (i=0; i<emempar.elemqu; i++)
				free(emempar.ep[i]);

		freeedar.destroy();
//		epar.destroy();
		emempar.destroy();
}

//=====================================================================
//=====================================================================

template <class eobj> inline eobj* container <eobj>::get()
{
  eobj* p;

  if (stack.elemqu==0)
  {
    p=new eobj;
    usedstack.put(p);
    return p;
  }
  else
  {
    p=stack.get();
    usedstack.put(p);
    return p;
  }
}

template <class eobj> void container <eobj>::init()
{
  i32 i;

  for (i=0; i<usedstack.elemqu; i++)
    stack.put(usedstack.ep[i]);
  usedstack.clear();
}

template <class eobj> void container <eobj>::create(i32 maxelemqu)
{
  stack.create(maxelemqu);
  usedstack.create(maxelemqu);
}

template <class eobj> void container <eobj>::destroy()
{
  i32 i;

  for (i=0; i<stack.elemqu; i++)
    delete stack.ep[i];
  stack.destroy();

  for (i=0; i<usedstack.elemqu; i++)
    delete usedstack.ep[i];
  usedstack.destroy();
}

//=====================================================================
//=====================================================================

template <class eobj> inline eobj* holder <eobj>::allocate(i32 maxsize, i32 increment)
{
  eobj* p;
  i32 oldsize;

  oldsize=cursize;

  if (cursize+maxsize>blocksize)
  {
    blocknum++;

    cursize=increment;

    if (blocknum==par.elemqu)
    {
      p=(eobj*)_aligned_malloc((i32)(blocksize*sizeof(eobj)),align);

      par.add(p);

      return p;
    }

    return par[blocknum];
  }

  cursize+=increment;

  return par[blocknum]+oldsize;
}

template <class eobj> inline void holder <eobj>::increment(i32 size)
{
  cursize+=size;
}

template <class eobj> void holder <eobj>::clear()
{
  blocknum=0;
  cursize=0;
}

template <class eobj> void holder <eobj>::create(i32 blocksize, i32 align)
{
  eobj* p;

  holder::blocksize=blocksize;
  holder::align=align;
  
  par.create(4);

  blocknum=0;
  cursize=0;

  p=(eobj*)_aligned_malloc((i32)(blocksize*sizeof(eobj)),align);
  par.add(p);
}

template <class eobj> void holder <eobj>::destroy()
{
  i32 i;

  for (i=0; i<par.elemqu; i++)
    _aligned_free(par[i]);

  par.destroy();
}


#endif
