// $Id$
//===============================================================
/**
 * @file TargetManager_exec.cpp
 *
 * @brief TargetManager Executor code
 *
 * @author Nilabja Roy nilabjar@dre.vanderbilt.edu
 */
//===============================================================
#include "TargetManager_exec.h"
#include "ciao/CIAO_common.h"
#include <orbsvcs/CosNamingC.h>
#include "DD_Handler.h"
#include "DnC_Dump.h"

using namespace std;

namespace CIDL_TargetManager_i
{
  //==================================================================
  // Facet Executor Implementation Class:   TargetManager_exec_i
  //==================================================================

  TargetManager_exec_i::
  TargetManager_exec_i (TargetManagerImpl_exec_i* exec ,
                        CORBA::ORB_ptr orb,
                        TargetManagerImpl_Context *context
                       )
    : _exec (exec),
      orb_ (orb),
      context_ (context)
  {
    // The DomainDataManager created here ...

    // get its own obj ref , then call


    CORBA::Object_var object = context_->get_CCM_object ();
    CIAO::TargetManagerImpl_var target_impl =
            CIAO::TargetManagerImpl::_narrow (object.in ());
    ::Deployment::TargetManager_var target =
            target_impl->provide_targetMgr ();
    dataManager_.reset (new DomainDataManager (orb, target.in ()));
  }

  TargetManager_exec_i::~TargetManager_exec_i (void)
  {
  }

  // Operations from ::Deployment::TargetManager

  ::Deployment::Domain *
  TargetManager_exec_i::getAllResources (
  ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((CORBA::SystemException))
  {
    return  dataManager_->get_initial_domain ();
  }

  ::Deployment::Domain *
  TargetManager_exec_i::getAvailableResources (
  ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((CORBA::SystemException))
  {
    return dataManager_->get_current_domain ();
  }

  void
  TargetManager_exec_i::commitResources (
  const ::Deployment::DeploymentPlan & /* plan */
  ACE_ENV_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((
  ::CORBA::SystemException,
  ::Deployment::ResourceNotAvailable,
  ::Deployment::PlanError))
  {
    throw CORBA::NO_IMPLEMENT ();
  }

  void
  TargetManager_exec_i::releaseResources (
  const ::Deployment::DeploymentPlan & /* argname */
  ACE_ENV_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((CORBA::SystemException))
  {
    throw CORBA::NO_IMPLEMENT ();
  }

  void
  TargetManager_exec_i::updateDomain (
  const ::CORBA::StringSeq &  elements ,
  const ::Deployment::Domain &  domainSubset ,
  ::Deployment::DomainUpdateKind  updateKind
  ACE_ENV_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((CORBA::SystemException))
  {
    // Your code here.
    if (CIAO::debug_level () > 9)
    {
      ACE_DEBUG ((LM_DEBUG , ".. Update Domain called ...\n"));
    }
    dataManager_->update_domain (
                    elements,
                    domainSubset,
                    updateKind
                    );
  }
  //==================================================================
  // Component Executor Implementation Class:   TargetManagerImpl_exec_i
  //==================================================================

  TargetManagerImpl_exec_i::TargetManagerImpl_exec_i (void)
  : exec_object_ (0)
  {
  }

  TargetManagerImpl_exec_i::~TargetManagerImpl_exec_i (void)
  {
  }

  // Supported or inherited operations.

  // Attribute operations.

  // Port operations.

  ::Deployment::CCM_TargetManager_ptr
  TargetManagerImpl_exec_i::get_targetMgr (
  ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((CORBA::SystemException))
  {
    // Your code here.
    if (CIAO::debug_level () > 9)
    {
      ACE_DEBUG ((LM_DEBUG , "Calling TM constructor"));
    }

    if (this->exec_object_.in () == 0)
    {
      this->exec_object_ = new TargetManager_exec_i(this,
                    context_->_ciao_the_Container()->the_ORB(),
                    context_
                    );
    }
    return this->exec_object_.in ();
  }

  // Operations from Components::SessionComponent

  void
  TargetManagerImpl_exec_i::set_session_context (
  ::Components::SessionContext_ptr ctx
  ACE_ENV_ARG_DECL)
  ACE_THROW_SPEC ((
  ::CORBA::SystemException,
  ::Components::CCMException))
  {
    this->context_ =
    TargetManagerImpl_Context::_narrow (
    ctx
    ACE_ENV_ARG_PARAMETER);
    ACE_CHECK;

    if (this->context_ == 0)
    {
      ACE_THROW (CORBA::INTERNAL ());
    }
  }

  void
  TargetManagerImpl_exec_i::ciao_preactivate (
  ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((
  ::CORBA::SystemException,
  ::Components::CCMException))
  {
    // Your code here.
  }

  void
  TargetManagerImpl_exec_i::ciao_postactivate (
  ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((
  ::CORBA::SystemException,
  ::Components::CCMException))
  {
    // Your code here.
  }


  void
  TargetManagerImpl_exec_i::ccm_activate (
  ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((
  ::CORBA::SystemException,
  ::Components::CCMException))
  {
    // Your code here.
    if (CIAO::debug_level () > 9)
    {
      ACE_DEBUG ((LM_DEBUG , "Inside CCM_ACTIVATE\n"));
    }
    get_targetMgr ();
  }

  void
  TargetManagerImpl_exec_i::ccm_passivate (
  ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((
  ::CORBA::SystemException,
  ::Components::CCMException))
  {
    // Your code here.
  }

  void
  TargetManagerImpl_exec_i::ccm_remove (
  ACE_ENV_SINGLE_ARG_DECL_NOT_USED)
  ACE_THROW_SPEC ((
  ::CORBA::SystemException,
  ::Components::CCMException))
  {
    // Your code here.
  }


  //==================================================================
  // Home Executor Implementation Class:   TargetManagerHome_exec_i
  //==================================================================

  TargetManagerHome_exec_i::TargetManagerHome_exec_i (void)
  {
  }

  TargetManagerHome_exec_i::~TargetManagerHome_exec_i (void)
  {
  }

  // Supported or inherited operations.

  // Home operations.

  // Factory and finder operations.

  // Attribute operations.

  // Implicit operations.

  ::Components::EnterpriseComponent_ptr
  TargetManagerHome_exec_i::create (
  ACE_ENV_SINGLE_ARG_DECL)
  ACE_THROW_SPEC ((
  ::CORBA::SystemException,
  ::Components::CCMException))
  {
    ::Components::EnterpriseComponent_ptr retval =
    ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_THROW_EX (
    retval,
    TargetManagerImpl_exec_i,
    CORBA::NO_MEMORY ());
    ACE_CHECK_RETURN (::Components::EnterpriseComponent::_nil ());

    return retval;
  }

  extern "C" TARGETMANAGER_EXEC_Export ::Components::HomeExecutorBase_ptr
  createTargetManagerHome_Impl (void)
  {
    ::Components::HomeExecutorBase_ptr retval =
    ::Components::HomeExecutorBase::_nil ();

    ACE_NEW_RETURN (
    retval,
    TargetManagerHome_exec_i,
    ::Components::HomeExecutorBase::_nil ());

    return retval;
  }
}
