/* speed.exe 00526080 FUN_00526080; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 004655f0 FUN_004655f0
 * calls 0065f860 FUN_0065f860
 * calls 005b8550 FUN_005b8550
 * calls 00515d70 FUN_00515d70
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 004647e0 FUN_004647e0
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_00526080(undefined4 *param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_40 [64];
  
  if (param_1[1] != 0) {
    FUN_004655f0(param_1[1]);
    param_1[1] = 0;
  }
  if (param_2 != 0) {
    FUN_004647e0(local_40,0x40,"SUBTITLES\\%s",param_2);
    psVar2 = (short *)FUN_0065f860(local_40,0,0);
    param_1[1] = psVar2;
    if (psVar2 != (short *)0x0) {
      *param_1 = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      sVar1 = *psVar2;
      while (sVar1 != -1) {
        psVar2 = psVar2 + 4;
        sVar1 = *psVar2;
      }
      if ((((param_3 == 0) || (iVar3 = FUN_00516af0(param_3), iVar3 == 0)) ||
          (iVar3 = FUN_005b8550(0x599b8442), iVar3 == 0)) || (*(int *)(iVar3 + 0x18) != 2)) {
        iVar3 = 0;
      }
      param_1[2] = iVar3;
      if (((param_3 == 0) || (iVar3 = FUN_00516af0(param_3), iVar3 == 0)) ||
         ((iVar3 = FUN_005b8550(0x2e8da933), iVar3 == 0 || (*(int *)(iVar3 + 0x18) != 2)))) {
        iVar3 = 0;
      }
      param_1[3] = iVar3;
      if (((param_3 == 0) || (iVar3 = FUN_00516af0(param_3), iVar3 == 0)) ||
         (iVar3 = FUN_005b8550(0x8bd49bcc), iVar3 == 0)) {
        iVar3 = 0;
      }
      param_1[4] = iVar3;
      FUN_00515d70(param_1[2],&DAT_00890978);
      uVar4 = FUN_00573140("SHOWSUBS");
      if ((param_1[2] != 0) && (iVar3 = FUN_005b1360(uVar4), iVar3 != 0)) {
        FUN_005b8400(iVar3,0);
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
      FUN_00515d70(param_1[3],&DAT_00890978);
      uVar4 = FUN_00573140("SHOWSUBS");
      if ((param_1[3] != 0) && (iVar3 = FUN_005b1360(uVar4), iVar3 != 0)) {
        FUN_005b8400(iVar3,0);
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
    }
  }
  return;
}

