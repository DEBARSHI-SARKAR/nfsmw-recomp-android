/* speed.exe 007cdbf0 __fassign; analysis pseudocode, not buildable source.
 * calls 007dea50 FID_conflict:__atodbl
 * calls 007de9b0 FID_conflict:__atodbl
 */

/* Library Function - Single Match
    __fassign
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  _CRT_FLOAT local_10;
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FID_conflict___atodbl(&local_10,number);
    *(float *)argument = local_10.f;
  }
  else {
    FID_conflict___atodbl(&local_c,number);
    *(float *)argument = local_c.f;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}

