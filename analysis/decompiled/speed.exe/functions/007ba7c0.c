/* speed.exe 007ba7c0 FUN_007ba7c0; analysis pseudocode, not buildable source.
 * calls 007a3260 FUN_007a3260
 * calls 00525220 FUN_00525220
 * calls 007a31d0 FUN_007a31d0
 * calls 005a5ea0 FUN_005a5ea0
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00512e40 FUN_00512e40
 * calls 00598970 FUN_00598970
 * calls 005faa20 FUN_005faa20
 * calls 007accb0 FUN_007accb0
 * calls 007acad0 FUN_007acad0
 * calls 0056bc10 FUN_0056bc10
 * calls 007ac8b0 FUN_007ac8b0
 * calls 007b4c50 FUN_007b4c50
 * calls 007ace50 FUN_007ace50
 * calls 007ad0f0 FUN_007ad0f0
 * calls 007ad310 FUN_007ad310
 */

void __fastcall FUN_007ba7c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_4;
  
  local_4 = param_1;
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
    uVar1 = FUN_005faa20();
    switch(uVar1) {
    case 0:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = 0xb80bfc8a;
      break;
    case 1:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = 0xa6ed015d;
      break;
    case 2:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = 0xec86e188;
      break;
    case 3:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = 0xcc959b8;
      break;
    case 4:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = 0x141edfe1;
      break;
    case 5:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = 0xf2745852;
      break;
    default:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = 0;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = 0x7dadee33;
  }
  FUN_00525220(uVar1,0x42adb44c,uVar3);
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
    uVar1 = *(undefined4 *)(DAT_0091cf90 + 0x18);
  }
  else {
    uVar1 = *(undefined4 *)(DAT_0091cf90 + 0x168);
    FUN_007a31d0();
    local_4 = 0;
    *(undefined4 *)(DAT_0091cf90 + 0x164) = 6;
    if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
      if (*(char *)(param_1 + 0x140) == '\0') {
        iVar2 = FUN_007b4c50(&local_4);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x13c) != 0) {
            return;
          }
          uVar1 = *(undefined4 *)(param_1 + 0x10);
          uVar3 = FUN_0056bc10(0x59b40454);
          uVar1 = FUN_00598970(uVar1,&DAT_00890978,2,0x1a294dad,0x1fab5998,0x1fab5998,uVar3);
          *(undefined4 *)(param_1 + 0x13c) = uVar1;
          return;
        }
        *(undefined1 *)(param_1 + 0x140) = 1;
        if (*(int *)(param_1 + 0x13c) != 0) {
          FUN_0056c6e0(*(int *)(param_1 + 0x13c));
        }
        iVar2 = DAT_0091cf90;
        uVar3 = FUN_00512e40(&local_4);
        *(undefined4 *)(iVar2 + 0x164) = uVar3;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x140) = 1;
    }
  }
  switch(uVar1) {
  case 0:
    FUN_007acad0();
    break;
  default:
    FUN_007ac8b0();
    break;
  case 2:
    FUN_007accb0();
    break;
  case 3:
    FUN_007ace50();
    break;
  case 4:
    FUN_007ad310();
    break;
  case 5:
    FUN_007ad0f0();
  }
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) ||
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) {
    FUN_007a3260();
  }
  FUN_005a5ea0(0);
  return;
}

