/* speed.exe 00737000 FUN_00737000; analysis pseudocode, not buildable source.
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00737000(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  
  puVar3 = (undefined4 *)(param_2 * 0x20 + param_1);
  iVar4 = 0;
  if (0 < (int)(&DAT_0090504c)[param_2 * 0x14]) {
    pfVar5 = (float *)(&DAT_00905050 + param_2 * 0x14);
    do {
      if (_DAT_00890dc4 <
          ABS(_DAT_0089096c -
              SQRT(pfVar5[2] * pfVar5[2] + pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5))) {
        FUN_0045f490(pfVar5,pfVar5);
      }
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 4;
    } while (iVar4 < (int)(&DAT_0090504c)[param_2 * 0x14]);
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *puVar3 = *param_3;
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  return;
}

