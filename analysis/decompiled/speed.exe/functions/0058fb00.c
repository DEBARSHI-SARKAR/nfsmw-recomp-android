/* speed.exe 0058fb00 FUN_0058fb00; analysis pseudocode, not buildable source.
 * calls 00586130 FUN_00586130
 * calls 00460ed0 FUN_00460ed0
 * calls 00585b50 FUN_00585b50
 * calls 0057f280 FUN_0057f280
 * calls 004611c0 FUN_004611c0
 * calls 00515cc0 FUN_00515cc0
 */

void __thiscall FUN_0058fb00(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined1 local_1d4 [156];
  short local_138;
  short local_136 [155];
  
  if (*param_1 != 0) {
    FUN_0057f280(local_1d4,0x9c);
    if (param_2 != '\0') {
      iVar1 = param_1[2];
      param_1[2] = iVar1 + 1;
      if (0x59 < iVar1 + 1) {
        param_1[2] = 0;
      }
      if (param_1[2] < 0x2d) {
        puVar6 = &DAT_008a1828;
      }
      else {
        puVar6 = &DAT_0089dfa0;
      }
      FUN_00460ed0(local_1d4,local_1d4,puVar6);
    }
    FUN_004611c0(&local_138,local_1d4);
    iVar1 = *param_1;
    FUN_00585b50(*(undefined4 *)(iVar1 + 0x24));
    iVar2 = *(int *)(iVar1 + 0x74);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
    psVar4 = &local_138;
    while ((local_138 != 0 &&
           (fVar5 = (float10)FUN_00586130(psVar4,uVar3,0,0), (float10)iVar2 < fVar5))) {
      psVar4 = psVar4 + 1;
      local_138 = *psVar4;
    }
    FUN_00515cc0(*param_1,psVar4);
  }
  return;
}

