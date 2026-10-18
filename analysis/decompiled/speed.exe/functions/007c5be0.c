/* speed.exe 007c5be0 type_info::operator!=; analysis pseudocode, not buildable source.
 * calls 007d1120 _strcmp
 */

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall type_info::operator!=(class type_info const &)const 
    public: bool __thiscall type_info::operator!=(class type_info const &)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

bool __thiscall type_info__operator__(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_2 + 9),(char *)(param_1 + 9));
  return iVar1 != 0;
}

