/* speed.exe 007c58b0 what; analysis pseudocode, not buildable source.
 */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual char const * __thiscall exception::what(void)const 
    public: virtual char const * __thiscall std::exception::what(void)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

char * __fastcall what(int param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    pcVar1 = "Unknown exception";
  }
  else {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}

