/* speed.exe 0071d730 FUN_0071d730; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 00715b00 FUN_00715b00
 * calls 00702230 FUN_00702230
 */

undefined4 __thiscall FUN_0071d730(int param_1,undefined4 param_2)

{
  undefined4 *_Dst;
  char cVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 1:
    param_1 = param_1 + 0xb8;
    cVar1 = FUN_00702230();
    if (cVar1 != '\0') {
      uVar2 = 0x200;
LAB_0071d7d5:
      FUN_00715b00(param_1,1,uVar2);
    }
    break;
  case 2:
    param_1 = param_1 + 0xa8;
    cVar1 = FUN_00702230();
    if (cVar1 != '\0') {
      uVar2 = 0x200;
      goto LAB_0071d7d5;
    }
    break;
  default:
    goto switchD_0071d749_caseD_3;
  case 4:
    param_1 = param_1 + 0x98;
    cVar1 = FUN_00702230();
    if (cVar1 != '\0') {
      uVar2 = 0x80000;
      goto LAB_0071d7d5;
    }
    break;
  case 8:
    param_1 = param_1 + 200;
    cVar1 = FUN_00702230();
    if (cVar1 != '\0') {
      uVar2 = 0x200;
      goto LAB_0071d7d5;
    }
    break;
  case 0x10:
    param_1 = param_1 + 0x88;
    cVar1 = FUN_00702230();
    if (cVar1 != '\0') {
      uVar2 = 0x10;
      goto LAB_0071d7d5;
    }
    break;
  case 0x20:
    param_1 = param_1 + 0x78;
    cVar1 = FUN_00702230();
    if (cVar1 != '\0') {
      uVar2 = 0x20;
      goto LAB_0071d7d5;
    }
  }
  if (param_1 != 0) {
    _Dst = *(undefined4 **)(param_1 + 4);
    uVar2 = *_Dst;
    FID_conflict__memcpy(_Dst,_Dst + 1,(*(int *)(param_1 + 8) - (int)(_Dst + 1) >> 2) << 2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
    return uVar2;
  }
switchD_0071d749_caseD_3:
  return 0xffffffff;
}

