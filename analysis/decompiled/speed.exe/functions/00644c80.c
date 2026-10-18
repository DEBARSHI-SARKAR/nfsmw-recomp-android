/* speed.exe 00644c80 FUN_00644c80; analysis pseudocode, not buildable source.
 * calls 00644bc0 FUN_00644bc0
 * calls 006442e0 FUN_006442e0
 * calls 0063ff30 FUN_0063ff30
 * calls 006341f0 FUN_006341f0
 */

undefined4 __thiscall FUN_00644c80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  param_2 = FUN_006341f0(*(undefined4 *)(param_1 + 8),param_2,param_4);
  piVar2 = *(int **)(param_1 + 8);
  iVar3 = *piVar2;
  piVar1 = piVar2 + 2;
  piVar6 = (int *)FUN_0063ff30(piVar1,piVar1 + iVar3,&param_2,0);
  if ((piVar6 < piVar1 + iVar3) && (*piVar6 == param_2)) {
    piVar2 = piVar2 + *piVar2 + 2 + ((int)piVar6 - (int)piVar1 >> 2) * 2;
    if (piVar2 != (int *)0x0) {
      *(int *)(param_1 + 0x24) = *piVar2;
      iVar3 = piVar2[1];
      *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
      uVar5 = DAT_0092044c;
      iVar4 = DAT_009203a4;
      DAT_009203a4 = DAT_009203a4 + 1;
      *(int *)(param_1 + 0xc) = iVar3;
      (&DAT_0091e148)[iVar4] = param_1;
      FUN_006442e0(uVar5,param_4);
      FUN_00644bc0(iVar4,param_3);
      return 1;
    }
  }
  return 0;
}

