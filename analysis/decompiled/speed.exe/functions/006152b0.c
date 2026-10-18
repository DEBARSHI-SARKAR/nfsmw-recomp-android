/* speed.exe 006152b0 FUN_006152b0; analysis pseudocode, not buildable source.
 * calls 00606980 FUN_00606980
 */

void FUN_006152b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (*DAT_0091e0e0)(param_1,0,0,0x48,0xe);
  if (iVar2 == 0) {
    if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00606980(param_1,4);
    }
    iVar2 = 0;
  }
  else if (param_1 != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
    *piVar1 = *piVar1 + 0x48;
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 0x45) = 0;
  *(undefined1 *)(iVar2 + 0x46) = 0;
  *(undefined1 *)(iVar2 + 0x47) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  return;
}

