/* speed.exe 00613dc0 FUN_00613dc0; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 00606980 FUN_00606980
 * calls 00613cc0 FUN_00613cc0
 */

undefined4 * FUN_00613dc0(int param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint in_EAX;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = param_3 + 0x11;
  puVar5 = (undefined4 *)0x0;
  if (uVar4 == 0) {
LAB_00613dd3:
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (uVar4 < 0xfffffffd) {
      puVar5 = (undefined4 *)(*DAT_0091e0e0)(param_1,0,0,uVar4,8);
      if (puVar5 == (undefined4 *)0x0) {
        if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00606980(param_1,4);
        }
        goto LAB_00613dd3;
      }
    }
    else {
      FUN_00613880(param_1,"memory allocation error: block too big");
    }
    if (param_1 != 0) {
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
      *piVar1 = *piVar1 + uVar4;
    }
  }
  puVar5[3] = param_3;
  puVar5[2] = in_EAX;
  *(undefined1 *)((int)puVar5 + 5) = 0;
  *(undefined1 *)(puVar5 + 1) = 4;
  *(undefined1 *)((int)puVar5 + 6) = 0;
  puVar6 = puVar5 + 4;
  for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(undefined1 *)(param_3 + 0x10 + (int)puVar5) = 0;
  piVar1 = *(int **)(param_1 + 0x10);
  uVar4 = in_EAX & piVar1[2] - 1U;
  *puVar5 = *(undefined4 *)(*piVar1 + uVar4 * 4);
  *(undefined4 **)(*piVar1 + uVar4 * 4) = puVar5;
  iVar2 = piVar1[1];
  piVar1[1] = iVar2 + 1;
  iVar3 = piVar1[2];
  if ((iVar3 < iVar2 + 1) && (iVar3 < 0x3fffffff)) {
    FUN_00613cc0(param_1,iVar3 * 2);
  }
  return puVar5;
}

