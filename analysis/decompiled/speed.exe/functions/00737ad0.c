/* speed.exe 00737ad0 FUN_00737ad0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

undefined4 __thiscall FUN_00737ad0(int param_1,uint param_2,undefined4 *param_3)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  
  if ((*(int *)(param_1 + 0x318) != 0) && (param_3 != (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)((param_2 + 1) * 0x10 + *(int *)(*(int *)(param_1 + 0x318) + 0x17b4));
    *param_3 = *puVar3;
    param_3[1] = puVar3[1];
    param_3[2] = puVar3[2];
    param_3[3] = puVar3[3];
    pfVar2 = (float *)FUN_00454810(0x8d5beb72,param_2 >> 1);
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)FUN_006269b0(4);
    }
    fVar1 = *pfVar2;
    param_3[3] = 0x3f800000;
    param_3[2] = fVar1 + (float)param_3[2];
    return 1;
  }
  return 0;
}

