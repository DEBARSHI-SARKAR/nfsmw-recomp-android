/* speed.exe 007c5bb0 operator==; analysis pseudocode, not buildable source.
 * calls 007d1120 _strcmp
 */

/* Library Function - Single Match
    public: int __thiscall type_info::operator==(class type_info const &)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (uint)(iVar1 == 0);
}

