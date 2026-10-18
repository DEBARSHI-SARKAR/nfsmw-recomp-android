/* speed.exe 007c5760 exception; analysis pseudocode, not buildable source.
 * calls 007d0bd0 FUN_007d0bd0
 * calls 007c66d0 _malloc
 * calls 007d0cd0 _strlen
 */

/* Library Function - Single Match
    public: __thiscall exception::exception(char const * const &)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR_FUN_008b80d0;
  sVar1 = _strlen(*param_1);
  pvVar2 = _malloc(sVar1 + 1);
  *(void **)(this + 4) = pvVar2;
  if (*(int *)(this + 4) != 0) {
    FUN_007d0bd0(*(undefined4 *)(this + 4),*param_1);
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}

