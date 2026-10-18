/* speed.exe 007c5a40 FID_conflict:__non_rtti_object; analysis pseudocode, not buildable source.
 * calls 007c5990 FID_conflict:bad_typeid
 */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall __non_rtti_object::__non_rtti_object(char const *)
    public: __thiscall std::__non_rtti_object::__non_rtti_object(char const *)
    public: __thiscall std::invalid_argument::invalid_argument(char const *)
    public: __thiscall std::length_error::length_error(char const *)
     7 names - too many to list
   
   Library: Visual Studio */

undefined4 * __thiscall FID_conflict___non_rtti_object(undefined4 *param_1,undefined4 param_2)

{
  FID_conflict_bad_typeid(param_2);
  *param_1 = &PTR_FUN_008b8108;
  return param_1;
}

