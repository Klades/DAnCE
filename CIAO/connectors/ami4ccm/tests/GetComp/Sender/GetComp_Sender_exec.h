// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/
#ifndef CIAO_GETCOMP_SENDER_EXEC_FENJU5_H_
#define CIAO_GETCOMP_SENDER_EXEC_FENJU5_H_

#include /**/ "ace/pre.h"

#include "GetComp_SenderEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "GetComp_Sender_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_GetComp_Sender_Impl
{

  /**
   * Component Executor Implementation Class: Sender_exec_i
   */

  class Sender_exec_i
    : public virtual Sender_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Sender_exec_i (void);
    virtual ~Sender_exec_i (void);

    //@{
    /** Supported operations and attributes. */

    //@}

    //@{
    /** Component attributes and port operations. */
    //@}

    //@{
    /** Operations from Components::SessionComponent. */
    virtual void set_session_context (::Components::SessionContext_ptr ctx);
    virtual void configuration_complete (void);
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
    //@}

    //@{
    /** User defined public operations. */

    //@}

  private:
    ::GetComp::CCM_Sender_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    //@}

    //@{
    /** User defined members. */

    //@}

    //@{
    /** User defined private operations. */
    virtual int get_component(void);
    //@}
  };

  class AMI4CCM_MyFooReplyHandler_run_my_foo_i
    : public ::GetComp::CCM_AMI4CCM_MyFooReplyHandler,
      public virtual ::CORBA::LocalObject
    {
    public:
      AMI4CCM_MyFooReplyHandler_run_my_foo_i (void);
      virtual ~AMI4CCM_MyFooReplyHandler_run_my_foo_i (void);

      virtual void
      foo (
        ::CORBA::Long ami_return_val,
        const char * answer);

      virtual void
      foo_excep (
        ::CCM_AMI::ExceptionHolder_ptr excep_holder);
    };

    extern "C" GETCOMP_T_SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
    create_GetComp_Sender_Impl (void);
  }

#include /**/ "ace/post.h"

#endif /* ifndef */
