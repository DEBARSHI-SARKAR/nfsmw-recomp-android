/* speed.exe 007989e0 FUN_007989e0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 0085ce00 FUN_0085ce00
 * calls 0083ff00 FUN_0083ff00
 * calls 0078c490 FUN_0078c490
 * calls 0085cd80 FUN_0085cd80
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0078c500 FUN_0078c500
 * calls 0079d3f0 FUN_0079d3f0
 * calls 00460d20 FUN_00460d20
 * calls 0085cd00 FUN_0085cd00
 * calls 007ec1bd FUN_007ec1bd
 * calls 00796d30 FUN_00796d30
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __thiscall FUN_007989e0(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  piVar2 = (int *)FUN_0085ce00(*param_1);
  iVar6 = 0;
  if (piVar2 != (int *)0x0) {
    if ((*param_2 < 0) || (param_2[0x83] == 0)) {
      if ((*param_1 != 0) &&
         ((piVar2 = (int *)FUN_0085ce00(*param_1), piVar2 != (int *)0x0 && (*piVar2 != 0)))) {
        FUN_0085cd80(*param_1);
        param_1[3] = 0;
      }
    }
    else {
      bVar1 = false;
      if (0 < *piVar2) {
        local_8 = 0;
        do {
          iVar4 = 0;
          if (0 < param_2[0x83]) {
            piVar5 = param_2 + 0x86;
            do {
              iVar3 = FUN_00460d20(local_8 + 0x50 + (int)piVar2,piVar5);
              if (iVar3 == 0) goto LAB_00798ac9;
              iVar4 = iVar4 + 1;
              piVar5 = piVar5 + 0x23;
            } while (iVar4 < param_2[0x83]);
          }
          bVar1 = true;
          FUN_0085cd00(*param_1,0,iVar6);
          FUN_0083ff00();
          local_8 = local_8 + -0xb0;
          iVar6 = iVar6 + -1;
          piVar2 = (int *)FUN_0085ce00(*param_1);
          FUN_00796d30();
          FUN_0079d3f0();
LAB_00798ac9:
          iVar6 = iVar6 + 1;
          local_8 = local_8 + 0xb0;
        } while (iVar6 < *piVar2);
      }
      local_8 = 0;
      if (0 < param_2[0x83]) {
        piVar5 = param_2 + 0x85;
        do {
          iVar6 = 0;
          if (0 < *piVar2) {
            piVar7 = piVar2 + 0x14;
            do {
              iVar4 = FUN_00460d20(piVar7,piVar5 + 1);
              if (iVar4 == 0) goto LAB_00798b3d;
              iVar6 = iVar6 + 1;
              piVar7 = piVar7 + 0x2c;
            } while (iVar6 < *piVar2);
          }
          bVar1 = true;
          FUN_0078c500(piVar5);
LAB_00798b3d:
          local_8 = local_8 + 1;
          piVar5 = piVar5 + 0x23;
        } while (local_8 < param_2[0x83]);
      }
      if (bVar1) {
        FUN_0078c490();
      }
    }
  }
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return;
}

