/* speed.exe 004f3350 FUN_004f3350; analysis pseudocode, not buildable source.
 * calls 004eb8e0 FUN_004eb8e0
 * calls 004e5970 FUN_004e5970
 */

void __fastcall FUN_004f3350(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 4;
  do {
    piVar1 = (int *)FUN_004e5970(0,0x20081);
    (**(code **)(*piVar1 + 4))(0x20081);
    iVar3 = 0;
    do {
      if ((1 << ((byte)iVar3 & 0x1f) & 0xc0U) != 0) {
        FUN_004eb8e0(iVar3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}

