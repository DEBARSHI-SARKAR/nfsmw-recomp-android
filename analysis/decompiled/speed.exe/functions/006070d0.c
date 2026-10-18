/* speed.exe 006070d0 FUN_006070d0; analysis pseudocode, not buildable source.
 * calls 00607200 FUN_00607200
 */

void FUN_006070d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iStack_c;
  int iStack_8;
  int local_4;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x28);
  param_1 = iVar1;
  local_4 = iVar1;
  (*(code *)unaff_ESI[1])(*unaff_ESI,&param_1,4,unaff_ESI[2]);
  iStack_c = 0;
  if (0 < iVar1) {
    do {
      piVar5 = (int *)(*(int *)(iVar2 + 8) + iStack_c * 8);
      param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(*(int *)(iVar2 + 8) + iStack_c * 8));
      (*(code *)unaff_ESI[1])(*unaff_ESI,&param_1,1,unaff_ESI[2]);
      if (*piVar5 == 3) {
        uVar6 = unaff_ESI[2];
        iStack_8 = piVar5[1];
        piVar5 = &iStack_8;
        uVar4 = *unaff_ESI;
LAB_00607197:
        (*(code *)unaff_ESI[1])(uVar4,piVar5,4,uVar6);
      }
      else if (*piVar5 == 4) {
        iVar1 = piVar5[1];
        if ((iVar1 == 0) || (iVar1 + 0x10 == 0)) {
          uVar6 = unaff_ESI[2];
          uVar4 = *unaff_ESI;
          piVar5 = &param_1;
          param_1 = 0;
          goto LAB_00607197;
        }
        iVar3 = *(int *)(iVar1 + 0xc) + 1;
        param_1 = iVar3;
        (*(code *)unaff_ESI[1])(*unaff_ESI,&param_1,4,unaff_ESI[2]);
        (*(code *)unaff_ESI[1])(*unaff_ESI,iVar1 + 0x10,iVar3,unaff_ESI[2]);
      }
      iStack_c = iStack_c + 1;
    } while (iStack_c < local_4);
  }
  iVar1 = *(int *)(iVar2 + 0x34);
  param_1 = iVar1;
  (*(code *)unaff_ESI[1])(*unaff_ESI,&param_1,4,unaff_ESI[2]);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      FUN_00607200(*(undefined4 *)(*(int *)(iVar2 + 0x10) + iVar3 * 4),*(undefined4 *)(iVar2 + 0x20)
                  );
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

