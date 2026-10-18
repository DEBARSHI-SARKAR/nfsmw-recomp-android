/* speed.exe 00500d80 FUN_00500d80; analysis pseudocode, not buildable source.
 * calls 004640f0 FUN_004640f0
 * calls 00464080 FUN_00464080
 * calls 004647c0 FUN_004647c0
 * calls 00661010 FUN_00661010
 * calls 00465a70 FUN_00465a70
 */

void __thiscall FUN_00500d80(int *param_1,char *param_2,int param_3,int param_4)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_8c;
  undefined1 local_80 [128];
  
  if (((param_2 != (char *)0x0) && (param_3 != 0)) && (param_4 != 0)) {
    if (*(short *)(param_4 + 0x12) != 0) {
      *(short *)(param_4 + 0x12) = *(short *)(param_4 + 0x12) + 1;
      return;
    }
    bVar1 = *(byte *)(param_4 + 0x11);
    if ((bVar1 & 0x10) == 0) {
      pcVar2 = " - Compressed";
      if ((bVar1 & 1) == 0) {
        pcVar2 = "";
      }
      FUN_004647c0(local_80,&DAT_00893b40,*(undefined4 *)(param_3 + 8),pcVar2);
      uVar3 = (uint)*param_2;
      iVar6 = *(int *)(param_4 + 8) + *param_1;
      local_8c = 0x2000;
      if ((((*(byte *)(param_4 + 0x11) & 1) == 0) || (local_8c = 0x2040, uVar3 == DAT_00915fac)) &&
         (uVar3 != 0)) {
        iVar4 = FUN_00464080(uVar3);
        if (iVar6 < iVar4) {
          local_8c = local_8c | uVar3 & 0xf;
        }
        else {
          FUN_004640f0("LanguageMemoryPool");
        }
      }
      uVar5 = FUN_00465a70(iVar6,local_8c);
      *(short *)(param_4 + 0x12) = *(short *)(param_4 + 0x12) + 1;
      *(undefined4 *)(param_4 + 0x14) = uVar5;
      *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + 1;
      *(short *)(param_2 + 2) = *(short *)(param_2 + 2) + 1;
      *(byte *)(param_4 + 0x11) = *(byte *)(param_4 + 0x11) | 0x10;
      FUN_00661010(*(int *)(param_4 + 0x14) + (*param_1 - 1U) & ~(*param_1 - 1U),
                   *(undefined4 *)(param_3 + 8),*(undefined4 *)(param_4 + 4),
                   *(undefined4 *)(param_4 + 8),&LAB_00500c10,param_4,param_2,0);
    }
    else {
      *(byte *)(param_4 + 0x11) = bVar1 & 0xdf;
      *(undefined2 *)(param_4 + 0x12) = 1;
    }
    *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + 1;
    *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + *(int *)(param_4 + 8);
  }
  return;
}

