/* speed.exe 00613f40 FUN_00613f40; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 00606980 FUN_00606980
 */

void FUN_00613f40(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  uVar1 = param_2 + 0x10;
  puVar3 = (undefined4 *)0x0;
  if (uVar1 == 0) {
LAB_00613fbe:
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (uVar1 < 0xfffffffd) {
      puVar3 = (undefined4 *)(*DAT_0091e0e0)(param_1,0,0,uVar1,0x10);
      if (puVar3 == (undefined4 *)0x0) {
        if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00606980(param_1,4);
        }
        goto LAB_00613fbe;
      }
    }
    else {
      FUN_00613880(param_1,"memory allocation error: block too big");
    }
    if (param_1 != 0) {
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
      *piVar2 = *piVar2 + uVar1;
    }
  }
  puVar3[3] = param_2;
  *(undefined1 *)((int)puVar3 + 5) = 2;
  *(undefined1 *)(puVar3 + 1) = 7;
  puVar3[2] = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38);
  *puVar3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  *(undefined4 **)(*(int *)(param_1 + 0x10) + 0x10) = puVar3;
  return;
}

