/* speed.exe 004e9780 FUN_004e9780; analysis pseudocode, not buildable source.
 * calls 004e32c0 FUN_004e32c0
 * calls 004e3320 FUN_004e3320
 * calls 004e3380 FUN_004e3380
 * calls 004e3350 FUN_004e3350
 * calls 004e32f0 FUN_004e32f0
 */

int * __thiscall FUN_004e9780(int param_1,uint param_2,char param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = param_2 & 0xe0000000;
  piVar1 = (int *)&DAT_00914414;
  if (0x20000000 < (int)uVar5) {
    if ((uVar5 == 0x40000000) || (uVar5 == 0x60000000)) {
      puVar4 = (undefined4 *)(*DAT_00914400)(param_2);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x68) * 0x40 + *(int *)(param_1 + 0x128));
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        (*DAT_00914404)(param_2,puVar4);
      }
      piVar1 = puVar4 + (param_2 & 0xf);
    }
    return piVar1;
  }
  uVar2 = (int)param_2 >> 0xb;
  if (uVar5 != 0x20000000) {
    if (uVar5 == 0x80000000) {
      if (param_4 != '\0') {
        piVar1 = (int *)FUN_004e32f0(param_2 & 0xff,uVar2 & 0x1f);
        return piVar1;
      }
      iVar3 = FUN_004e32f0(param_2 & 0xff,uVar2 & 0x1f);
      iVar3 = *(int *)(iVar3 + 4);
      if (param_3 == '\0') {
        return (int *)(iVar3 + 0x10);
      }
    }
    else {
      if (uVar5 == 0xa0000000) {
        iVar3 = FUN_004e3320(param_2 & 0xff,uVar2 & 0x1f);
        if (param_3 == '\0') {
          return (int *)(*(int *)(iVar3 + 4) + 0x1c);
        }
        return (int *)(*(int *)(iVar3 + 4) + 0x18);
      }
      if (uVar5 != 0) {
        return (int *)&DAT_00914414;
      }
      iVar3 = FUN_004e32c0(param_2 & 0xff,uVar2 & 0x1f);
      piVar1 = *(int **)(iVar3 + 4);
      if (param_3 != '\0') goto LAB_004e98b8;
      iVar3 = *piVar1;
    }
    return (int *)(iVar3 + 0xc);
  }
  if ((param_2 & 0x10000000) != 0) {
    iVar3 = FUN_004e3350(param_2 & 0xff,uVar2 & 0x1f);
    return (int *)(*(int *)(iVar3 + 4) + 4);
  }
  iVar3 = FUN_004e3380(param_2 & 0xff,uVar2 & 0x1f);
  piVar1 = *(int **)(iVar3 + 4);
LAB_004e98b8:
  return piVar1 + 2;
}

