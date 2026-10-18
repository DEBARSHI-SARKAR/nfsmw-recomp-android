/* speed.exe 007c5990 FID_conflict:bad_typeid; analysis pseudocode, not buildable source.
 * calls 007c5760 exception
 */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall bad_typeid::bad_typeid(char const *)
    public: __thiscall std::bad_typeid::bad_typeid(char const *)
    public: __thiscall std::logic_error::logic_error(char const *)
    public: __thiscall std::runtime_error::runtime_error(char const *)
   
   Library: Visual Studio */

exception * __fastcall FID_conflict_bad_typeid(exception *param_1)

{
  exception::exception(param_1,(char **)&stack0x00000004);
  *(undefined ***)param_1 = &PTR_FUN_008b80fc;
  return param_1;
}

