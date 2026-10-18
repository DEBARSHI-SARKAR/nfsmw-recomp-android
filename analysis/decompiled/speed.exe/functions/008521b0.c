/* speed.exe 008521b0 FUN_008521b0; analysis pseudocode, not buildable source.
 * calls 00851850 FUN_00851850
 * calls 0085ac70 FUN_0085ac70
 * calls 00851c50 FUN_00851c50
 * calls 0085ad10 FUN_0085ad10
 * calls 0085ac90 FUN_0085ac90
 */

undefined4 FUN_008521b0(int param_1,int param_2,undefined4 param_3,char *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  
  FUN_00851c50(param_1);
  if ((int)param_5 < 0) {
    param_5 = param_4;
    do {
      cVar1 = *param_5;
      param_5 = param_5 + 1;
    } while (cVar1 != '\0');
    param_5 = param_5 + (1 - (int)(param_4 + 1));
  }
  iVar2 = FUN_0085ac70(param_1 + 0xe4,param_5 + 0xc);
  iVar3 = FUN_00851850(iVar2,0x8000);
  if (iVar2 <= iVar3) {
    puVar5 = (undefined1 *)(*(int *)(param_1 + 0x70) + *(int *)(param_1 + 100));
    if (0 < (int)param_5) {
      pcVar6 = puVar5 + 0xc;
      for (uVar4 = (uint)param_5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)param_4;
        param_4 = param_4 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = (uint)param_5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *param_4;
        param_4 = param_4 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar2;
    puVar5[8] = (char)((uint)iVar2 >> 0x18);
    puVar5[9] = (char)((uint)iVar2 >> 0x10);
    puVar5[10] = (char)((uint)iVar2 >> 8);
    *puVar5 = (char)((uint)param_2 >> 0x18);
    puVar5[1] = (char)((uint)param_2 >> 0x10);
    puVar5[3] = (char)param_2;
    puVar5[2] = (char)((uint)param_2 >> 8);
    puVar5[4] = (char)((uint)param_3 >> 0x18);
    puVar5[0xb] = (char)iVar2;
    puVar5[5] = (char)((uint)param_3 >> 0x10);
    puVar5[6] = (char)((uint)param_3 >> 8);
    puVar5[7] = (char)param_3;
    FUN_0085ac90(param_1 + 0xe4,puVar5,iVar2);
    FUN_0085ad10(param_1 + 0xe4,puVar5,iVar2);
    if (param_2 == 0x40746963) {
      *(undefined2 *)(param_1 + 0x8e) = 0;
    }
    FUN_00851c50(param_1);
    return 0;
  }
  return 0xffffffff;
}

