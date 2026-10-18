/* speed.exe 007f00ad FUN_007f00ad; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000072 WriteFile
 */

DWORD FUN_007f00ad(HANDLE param_1,LPCVOID param_2,DWORD param_3)

{
  WriteFile(param_1,param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
  return param_3;
}

