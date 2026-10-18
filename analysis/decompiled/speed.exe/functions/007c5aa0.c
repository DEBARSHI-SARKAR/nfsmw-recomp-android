/* speed.exe 007c5aa0 FID_conflict:evaluation_error; analysis pseudocode, not buildable source.
 * calls 007c59f0 FUN_007c59f0
 */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall CTypedPtrList<class CList<void *,void *>,struct COleControlSiteOrWnd
   *>::CTypedPtrList<class CList<void *,void *>,struct COleControlSiteOrWnd *>(int)
    public: __thiscall CTypedPtrList<class CPtrList,struct COleControlSiteOrWnd
   *>::CTypedPtrList<class CPtrList,struct COleControlSiteOrWnd *>(int)
    public: __thiscall __non_rtti_object::__non_rtti_object(class __non_rtti_object const &)
    public: __thiscall std::__non_rtti_object::__non_rtti_object(class std::__non_rtti_object const
   &)
     21 names - too many to list
   
   Library: Visual Studio */

undefined4 * __thiscall FID_conflict_evaluation_error(undefined4 *param_1,undefined4 param_2)

{
  FUN_007c59f0(param_2);
  *param_1 = &PTR_FUN_008b8108;
  return param_1;
}

