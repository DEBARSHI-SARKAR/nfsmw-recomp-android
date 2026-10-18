/* speed.exe 005488b0 FUN_005488b0; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00531760 FUN_00531760
 * calls 00525220 FUN_00525220
 * calls 005252d0 FUN_005252d0
 * calls 005316a0 FUN_005316a0
 */

void __fastcall FUN_005488b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x164)) {
  case 0:
    uVar2 = 0xbf55e8b2;
    goto LAB_005488f1;
  case 1:
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = 0xdfd23484;
    break;
  case 2:
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = 0xf74b357d;
    break;
  case 3:
    uVar2 = 0xfea872d4;
LAB_005488f1:
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    break;
  default:
    goto switchD_005488be_default;
  }
  FUN_00525220(uVar3,0xd259525f,uVar2);
switchD_005488be_default:
  iVar1 = *(int *)(param_1 + 0x168);
  uVar2 = 0x213587bf;
  if (iVar1 == 1) {
    uVar2 = 0xa9be7d7;
  }
  else if (iVar1 == 2) {
    uVar2 = 0xa9be7d8;
  }
  else if (iVar1 == 3) {
    uVar2 = 0xa9be7da;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xcb76ce5b,uVar2);
  if (*(int *)(param_1 + 0x15c) == 0) {
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9331fd4f,&DAT_00890978);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xfeeeb39b,&DAT_00890978);
  }
  else {
    FUN_005316a0();
    FUN_00531760();
  }
  if ((*(int *)(param_1 + 0x34) != 0) && (*(char *)(param_1 + 0x170) != '\0')) {
    if (*(char *)(*(int *)(param_1 + 0x34) + 0x48) == '\0') {
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x5ee23227,0x6ebbfb68,1);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = 0xba0a6a2b;
    }
    else {
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x5ee23227,0x6ebbfb68,1);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = 0x2c35ec64;
    }
    FUN_00525220(uVar2,0x9acd367a,uVar3);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x51f0064f,0x58b828ed);
    return;
  }
  if (((DAT_0092d884 != 0) && ((int *)*DAT_0092d87c != (int *)0x0)) &&
     (iVar1 = (**(code **)(*(int *)*DAT_0092d87c + 4))(), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0x15c) == 0) || (*(int *)(*(int *)(param_1 + 0x15c) + 0x30) == 0)) {
      if (DAT_0091ca4c == 0) {
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x9acd367a,0x43512519);
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar3 = 0x163c76;
      }
      else {
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x9acd367a,0xf1d0d8a5);
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar3 = 0x6ebbfb68;
      }
    }
    else {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x9acd367a,0x43512519);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = 0x6ebbfb68;
    }
    FUN_00524920(uVar2,0x5ee23227,uVar3,1);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x51f0064f,0x1335f0);
  }
  return;
}

