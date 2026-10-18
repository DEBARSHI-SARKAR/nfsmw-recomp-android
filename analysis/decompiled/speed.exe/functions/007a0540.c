/* speed.exe 007a0540 FUN_007a0540; analysis pseudocode, not buildable source.
 * calls 0075f4f0 FUN_0075f4f0
 * calls 00734d10 FUN_00734d10
 * calls 0079f400 FUN_0079f400
 * calls 00735ad0 FUN_00735ad0
 * calls 0079fa30 FUN_0079fa30
 * calls 00732fd0 FUN_00732fd0
 * calls 00733200 FUN_00733200
 */

void FUN_007a0540(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar3 = &DAT_009b4250;
  do {
    puVar7 = puVar3;
    if (puVar3[1] == param_2) break;
    puVar3 = puVar3 + 7;
    puVar7 = (undefined4 *)0x0;
  } while ((int)puVar3 < 0x9b42a4);
  if (((5 < DAT_009b4220) && (DAT_009b0fa0 == 5)) && (puVar7 != (undefined4 *)0x0)) {
    FUN_00732fd0(&DAT_009b42d8);
    uVar4 = FUN_00732fd0(&DAT_009b4440);
    uVar1 = *puVar7;
    iVar5 = FUN_00735ad0(uVar1);
    if ((iVar5 != 0) && (cVar2 = FUN_00733200(), cVar2 != '\0')) {
      FUN_0075f4f0(uVar1,param_1,uVar4);
      puVar3 = &DAT_009b4250;
      do {
        if (((puVar3[1] != -1) && (puVar3 != (undefined4 *)0x0)) &&
           ((puVar3[1] != param_2 &&
            (((4 < (int)puVar3[4] && (iVar6 = FUN_00735ad0(*puVar3), iVar6 != 0)) &&
             (cVar2 = FUN_00734d10(iVar5,uVar4), cVar2 != '\0')))))) {
          FUN_0079f400(puVar3[1],2,param_1,0);
        }
        puVar3 = puVar3 + 7;
      } while ((int)puVar3 < 0x9b42a4);
      FUN_0079fa30(param_2,uVar4);
    }
  }
  return;
}

