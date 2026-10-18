/* speed.exe 0060a1f0 FUN_0060a1f0; analysis pseudocode, not buildable source.
 * calls 00454c30 FUN_00454c30
 * calls 006269b0 FUN_006269b0
 */

void FUN_0060a1f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1[2] + 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_00454c30(param_1[3]);
LAB_0060a20e:
    if (puVar4 != (undefined4 *)0x0) goto LAB_0060a21c;
  }
  else if (param_1[3] == 0) goto LAB_0060a20e;
  puVar4 = (undefined4 *)FUN_006269b0(4);
LAB_0060a21c:
  iVar2 = *param_1;
  puVar3 = *(undefined4 **)(iVar2 + 8);
  puVar3[1] = *puVar4;
  *puVar3 = 3;
  piVar1 = (int *)(iVar2 + 8);
  *piVar1 = *piVar1 + 8;
  return;
}

