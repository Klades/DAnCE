/* -*- C++ -*- */
// $Id$

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef _TAO_IDL_IORC_H_
#define _TAO_IDL_IORC_H_

#include "ace/OS.h"
#include "tao/corbafwd.h"
#include "tao/Environment.h"
#include "tao/CDR.h"
#include "tao/Object.h"
#include "tao/Sequence.h"
#include "tao/Sequence_T.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO
#if defined(_MSC_VER)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

TAO_NAMESPACE  TAO_IOP
{

#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION___PTR_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION___PTR_CH_

  class TAO_IOR_Manipulation;
  typedef TAO_IOR_Manipulation *TAO_IOR_Manipulation_ptr;

#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION___VAR_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION___VAR_CH_

  class TAO_Export TAO_IOR_Manipulation_var
  {
  public:
    TAO_IOR_Manipulation_var (void); // default constructor
    TAO_IOR_Manipulation_var (TAO_IOR_Manipulation_ptr);
    TAO_IOR_Manipulation_var (const TAO_IOR_Manipulation_var &); // copy constructor
    ~TAO_IOR_Manipulation_var (void); // destructor

    TAO_IOR_Manipulation_var &operator= (TAO_IOR_Manipulation_ptr);
    TAO_IOR_Manipulation_var &operator= (const TAO_IOR_Manipulation_var &);
    TAO_IOR_Manipulation_ptr operator-> (void) const;

    operator const TAO_IOR_Manipulation_ptr &() const;
    operator TAO_IOR_Manipulation_ptr &();
    // in, inout, out, _retn
    TAO_IOR_Manipulation_ptr in (void) const;
    TAO_IOR_Manipulation_ptr &inout (void);
    TAO_IOR_Manipulation_ptr &out (void);
    TAO_IOR_Manipulation_ptr _retn (void);
    TAO_IOR_Manipulation_ptr ptr (void) const;

  private:
    TAO_IOR_Manipulation_ptr ptr_;
  };


#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION___OUT_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION___OUT_CH_

  class TAO_Export TAO_IOR_Manipulation_out
  {
  public:
    TAO_IOR_Manipulation_out (TAO_IOR_Manipulation_ptr &);
    TAO_IOR_Manipulation_out (TAO_IOR_Manipulation_var &);
    TAO_IOR_Manipulation_out (const TAO_IOR_Manipulation_out &);
    TAO_IOR_Manipulation_out &operator= (const TAO_IOR_Manipulation_out &);
    TAO_IOR_Manipulation_out &operator= (const TAO_IOR_Manipulation_var &);
    TAO_IOR_Manipulation_out &operator= (TAO_IOR_Manipulation_ptr);
    operator TAO_IOR_Manipulation_ptr &();
    TAO_IOR_Manipulation_ptr &ptr (void);
    TAO_IOR_Manipulation_ptr operator-> (void);

  private:
    TAO_IOR_Manipulation_ptr &ptr_;
  };


#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_CH_

  class TAO_Export TAO_IOR_Manipulation : public virtual ACE_CORBA_1 (Object)
  {
  public:
  #if !defined(__GNUC__) || __GNUC__ > 2 || __GNUC_MINOR__ >= 8
    typedef TAO_IOR_Manipulation_ptr _ptr_type;
    typedef TAO_IOR_Manipulation_var _var_type;
  #endif /* __GNUC__ */

    // the static operations
    static TAO_IOR_Manipulation_ptr _duplicate (TAO_IOR_Manipulation_ptr obj);
    static TAO_IOR_Manipulation_ptr _narrow (
        CORBA::Object_ptr obj,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );
    static TAO_IOR_Manipulation_ptr _unchecked_narrow (
        CORBA::Object_ptr obj,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );
    static TAO_IOR_Manipulation_ptr _nil (void);


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_EMPTYPROFILELIST___PTR_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_EMPTYPROFILELIST___PTR_CH_

    class TAO_Export EmptyProfileList;
    typedef EmptyProfileList *EmptyProfileList_ptr;

#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_EMPTYPROFILELIST_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_EMPTYPROFILELIST_CH_

    class TAO_Export EmptyProfileList : public CORBA::UserException
    {
    public:

      EmptyProfileList (void); // default ctor
      EmptyProfileList (const EmptyProfileList &); // copy ctor
      ~EmptyProfileList (void); // dtor
            EmptyProfileList &operator= (const EmptyProfileList &);


      virtual void _raise (void);

      static EmptyProfileList *_narrow (CORBA::Exception *);


      // = TAO extension
      static CORBA::Exception *_alloc (void);

    }; // exception TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList

        static CORBA::TypeCode_ptr _tc_EmptyProfileList;


#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_NOTFOUND___PTR_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_NOTFOUND___PTR_CH_

    class NotFound;
    typedef NotFound *NotFound_ptr;

#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_NOTFOUND_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_NOTFOUND_CH_

    class TAO_Export NotFound : public CORBA::UserException
    {
    public:

      NotFound (void); // default ctor
      NotFound (const NotFound &); // copy ctor
      ~NotFound (void); // dtor
            NotFound &operator= (const NotFound &);


      virtual void _raise (void);

      static NotFound *_narrow (CORBA::Exception *);


      // = TAO extension
      static CORBA::Exception *_alloc (void);

    }; // exception TAO_IOP::TAO_IOR_Manipulation::NotFound

        static CORBA::TypeCode_ptr _tc_NotFound;


#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_DUPLICATE___PTR_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_DUPLICATE___PTR_CH_

    class Duplicate;
    typedef Duplicate *Duplicate_ptr;

#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_DUPLICATE_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_DUPLICATE_CH_

    class TAO_Export  Duplicate : public CORBA::UserException
    {
    public:

      Duplicate (void); // default ctor
      Duplicate (const Duplicate &); // copy ctor
      ~Duplicate (void); // dtor
            Duplicate &operator= (const Duplicate &);


      virtual void _raise (void);

      static Duplicate *_narrow (CORBA::Exception *);


      // = TAO extension
      static CORBA::Exception *_alloc (void);

    }; // exception TAO_IOP::TAO_IOR_Manipulation::Duplicate

        static CORBA::TypeCode_ptr _tc_Duplicate;


#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_INVALID_IOR___PTR_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_INVALID_IOR___PTR_CH_

    class Invalid_IOR;
    typedef Invalid_IOR *Invalid_IOR_ptr;

#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_INVALID_IOR_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_INVALID_IOR_CH_

    class TAO_Export  Invalid_IOR : public CORBA::UserException
    {
    public:

      Invalid_IOR (void); // default ctor
      Invalid_IOR (const Invalid_IOR &); // copy ctor
      ~Invalid_IOR (void); // dtor
            Invalid_IOR &operator= (const Invalid_IOR &);


      virtual void _raise (void);

      static Invalid_IOR *_narrow (CORBA::Exception *);


      // = TAO extension
      static CORBA::Exception *_alloc (void);

    }; // exception TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR

        static CORBA::TypeCode_ptr _tc_Invalid_IOR;


#endif /* end #if !defined */

#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_IORLIST_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_IORLIST_CH_

    // *************************************************************
    // IORList
    // *************************************************************

    class TAO_Export IORList : public
      TAO_Unbounded_Object_Sequence<CORBA::Object,CORBA::Object_var>
    {
    public:
      IORList (void); // default ctor
      IORList (CORBA::ULong max); // uses max size
      IORList (
        CORBA::ULong max,
        CORBA::ULong length,
        CORBA::Object_ptr *buffer,
        CORBA::Boolean release=0
      );
      IORList (const IORList &); // copy ctor
      ~IORList (void); // dtor
    };
    typedef IORList *IORList_ptr;

#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_IORLIST___VAR_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_IORLIST___VAR_CH_

// *************************************************************
    // class TAO_IOP::TAO_IOR_Manipulation::IORList_var
    // *************************************************************

    class TAO_Export IORList_var
    {
    public:
      IORList_var (void); // default constructor
      IORList_var (IORList *);
      IORList_var (const IORList_var &); // copy constructor
      ~IORList_var (void); // destructor

      IORList_var &operator= (IORList *);
      IORList_var &operator= (const IORList_var &);
      IORList *operator-> (void);
      const IORList *operator-> (void) const;

      operator const IORList &() const;
      operator IORList &();
      operator IORList &() const;

      TAO_Object_Manager<CORBA::Object,CORBA::Object_var> operator[] (CORBA::ULong index);
      // in, inout, out, _retn
      const IORList &in (void) const;
      IORList &inout (void);
      IORList *&out (void);
      IORList *_retn (void);
      IORList *ptr (void) const;

    private:
      IORList *ptr_;
    };


#endif /* end #if !defined */


#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_IORLIST___OUT_CH_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_IORLIST___OUT_CH_

    class TAO_Export IORList_out
    {
    public:
      IORList_out (IORList *&);
      IORList_out (IORList_var &);
      IORList_out (const IORList_out &);
      IORList_out &operator= (const IORList_out &);
      IORList_out &operator= (IORList *);
      operator IORList *&();
      IORList *&ptr (void);
      IORList *operator-> (void);

      TAO_Object_Manager<CORBA::Object,CORBA::Object_var> operator[] (CORBA::ULong index);

    private:
      IORList *&ptr_;
      // assignment from T_var not allowed
      void operator= (const IORList_var &);
    };


#endif /* end #if !defined */

    static CORBA::TypeCode_ptr _tc_IORList;

    virtual CORBA::Object_ptr merge_iors (
        const IORList & iors,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList,
        TAO_IOP::TAO_IOR_Manipulation::Duplicate,
        TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR
      ));

    virtual CORBA::Object_ptr add_profiles (
        CORBA::Object_ptr ior1,
        CORBA::Object_ptr ior2,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList,
        TAO_IOP::TAO_IOR_Manipulation::Duplicate,
        TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR
      ));

    virtual CORBA::Object_ptr remove_profiles (
        CORBA::Object_ptr ior1,
        CORBA::Object_ptr ior2,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList,
        TAO_IOP::TAO_IOR_Manipulation::NotFound
      ));

    virtual CORBA::ULong is_in_ior (
        CORBA::Object_ptr ior1,
        CORBA::Object_ptr ior2,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::NotFound
      ));

    virtual CORBA::ULong get_profile_count (
        CORBA::Object_ptr ior,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList
      ));

    virtual CORBA::Boolean _is_a (
        const CORBA::Char *type_id,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );
    virtual const char* _interface_repository_id (void) const;

  protected:
    TAO_IOR_Manipulation (void);
    TAO_IOR_Manipulation (TAO_Stub *objref,
        TAO_ServantBase *_tao_servant = 0,
        CORBA::Boolean _tao_collocated = 0
      );
    virtual ~TAO_IOR_Manipulation (void);
  private:
    TAO_IOR_Manipulation (const TAO_IOR_Manipulation &);
    void operator= (const TAO_IOR_Manipulation &);
  };


#endif /* end #if !defined */

  TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_TAO_IOR_Manipulation;


}
TAO_NAMESPACE_CLOSE // module TAO_IOP

// Any operators for interface TAO_IOP::TAO_IOR_Manipulation
void TAO_Export operator<<= (CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation_ptr);
CORBA::Boolean  operator>>= (const CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation *&);
void TAO_Export operator<<= (CORBA::Any &, const TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList &); // copying version
void TAO_Export operator<<= (CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList*); // noncopying version
CORBA::Boolean TAO_Export operator>>= (const CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList *&);
void TAO_Export operator<<= (CORBA::Any &, const TAO_IOP::TAO_IOR_Manipulation::NotFound &); // copying version
void TAO_Export operator<<= (CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation::NotFound*); // noncopying version
CORBA::Boolean TAO_Export operator>>= (const CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation::NotFound *&);
void TAO_Export operator<<= (CORBA::Any &, const TAO_IOP::TAO_IOR_Manipulation::Duplicate &); // copying version
void TAO_Export operator<<= (CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation::Duplicate*); // noncopying version
CORBA::Boolean TAO_Export operator>>= (const CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation::Duplicate *&);
void TAO_Export operator<<= (CORBA::Any &, const TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR &); // copying version
void TAO_Export operator<<= (CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR*); // noncopying version
CORBA::Boolean TAO_Export operator>>= (const CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR *&);
void TAO_Export operator<<= (CORBA::Any &, const TAO_IOP::TAO_IOR_Manipulation::IORList &); // copying version
void TAO_Export operator<<= (CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation::IORList*); // noncopying version
CORBA::Boolean TAO_Export operator>>= (const CORBA::Any &, TAO_IOP::TAO_IOR_Manipulation::IORList *&);

#ifndef __ACE_INLINE__

CORBA::Boolean TAO_Export
operator<< (TAO_OutputCDR &, const TAO_IOP::TAO_IOR_Manipulation_ptr );
CORBA::Boolean TAO_Export
operator>> (TAO_InputCDR &, TAO_IOP::TAO_IOR_Manipulation_ptr &);
CORBA::Boolean TAO_Export
operator<< (TAO_OutputCDR &, const TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList &);
CORBA::Boolean TAO_Export
operator>> (TAO_InputCDR &, TAO_IOP::TAO_IOR_Manipulation::EmptyProfileList &);
CORBA::Boolean TAO_Export
operator<< (TAO_OutputCDR &, const TAO_IOP::TAO_IOR_Manipulation::NotFound &);
CORBA::Boolean TAO_Export
operator>> (TAO_InputCDR &, TAO_IOP::TAO_IOR_Manipulation::NotFound &);
CORBA::Boolean TAO_Export
operator<< (TAO_OutputCDR &, const TAO_IOP::TAO_IOR_Manipulation::Duplicate &); //
CORBA::Boolean TAO_Export
operator>> (TAO_InputCDR &, TAO_IOP::TAO_IOR_Manipulation::Duplicate &);
CORBA::Boolean TAO_Export
operator<< (TAO_OutputCDR &, const TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR &); //
CORBA::Boolean TAO_Export
operator>> (TAO_InputCDR &, TAO_IOP::TAO_IOR_Manipulation::Invalid_IOR &);
CORBA::Boolean TAO_Export
operator<< (
    TAO_OutputCDR &,
    const TAO_IOP::TAO_IOR_Manipulation::IORList &
  );
CORBA::Boolean TAO_Export
operator>> (
    TAO_InputCDR &,
    TAO_IOP::TAO_IOR_Manipulation::IORList &
  );


#endif /* __ACE_INLINE__ */


#if defined (__ACE_INLINE__)
#include "IORC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER)
#pragma warning(default:4250)
#endif /* _MSC_VER */

#endif /* ifndef */
