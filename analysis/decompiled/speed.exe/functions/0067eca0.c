/* speed.exe 0067eca0 FUN_0067eca0; analysis pseudocode, not buildable source.
 * calls 0067ad40 FUN_0067ad40
 * calls 0067ac20 FUN_0067ac20
 * calls 0041ae90 FUN_0041ae90
 */

void __fastcall FUN_0067eca0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 1;
  do {
    if (param_1 == -0xb4) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_1 + 0xac;
    }
    FUN_0067ad40(iVar5,uVar4);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 10);
  switch(*(undefined4 *)(param_1 + 0x140)) {
  case 0:
    FUN_0067ac20(1);
    uVar3 = 6;
    break;
  case 1:
    FUN_0067ac20(2);
    uVar3 = 5;
    break;
  case 2:
    FUN_0067ac20(2);
    uVar3 = 4;
    break;
  case 3:
    FUN_0067ac20(2);
    FUN_0067ac20(3);
    uVar3 = 6;
    break;
  default:
    goto switchD_0067ecd8_caseD_4;
  case 6:
    FUN_0067ac20(1);
    FUN_0067ac20(6);
    uVar3 = 7;
  }
  FUN_0067ac20(uVar3);
switchD_0067ecd8_caseD_4:
  cVar2 = (**(code **)(*(int *)(param_1 + 0xac) + 0x88))();
  if (cVar2 == '\0') {
    if (param_1 == -0xb4) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_1 + 0xac;
    }
    if (DAT_0092d020 <= DAT_0092d024) {
      uVar3 = (**(code **)(DAT_0092d018 + 0xc))(DAT_0092d024 + 1);
      FUN_0041ae90(uVar3);
    }
    piVar1 = (int *)(DAT_0092d01c + DAT_0092d024 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar5;
    }
    DAT_0092d024 = DAT_0092d024 + 1;
  }
  if (*(int *)(param_1 + 0x118) == DAT_0092c504) {
    if (param_1 == -0xb4) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 + 0xac;
    }
    if (DAT_0092d080 <= DAT_0092d084) {
      uVar3 = (**(code **)(DAT_0092d078 + 0xc))(DAT_0092d084 + 1);
      FUN_0041ae90(uVar3);
    }
    piVar1 = (int *)(DAT_0092d07c + DAT_0092d084 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_1;
    }
    DAT_0092d084 = DAT_0092d084 + 1;
  }
  return;
}

