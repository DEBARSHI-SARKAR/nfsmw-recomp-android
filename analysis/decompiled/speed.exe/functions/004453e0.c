/* speed.exe 004453e0 FUN_004453e0; analysis pseudocode, not buildable source.
 * calls 00491f50 FUN_00491f50
 */

uint FUN_004453e0(void)

{
  char cVar1;
  undefined4 local_8;
  uint local_4;
  
  local_8 = 0;
  cVar1 = FUN_00491f50("AnimationBank",&local_8,&local_4);
  return -(uint)(cVar1 != '\0') & local_4;
}

