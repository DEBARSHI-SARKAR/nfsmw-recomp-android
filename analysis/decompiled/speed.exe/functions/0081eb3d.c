/* speed.exe 0081eb3d FUN_0081eb3d; analysis pseudocode, not buildable source.
 */

void FUN_0081eb3d(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(int *)((int)&DAT_009c1fe8 + iVar1) = *(int *)((int)&DAT_0090bd1c + iVar1) + param_1;
    iVar1 = iVar2;
  } while (iVar2 < 0x18);
  return;
}

