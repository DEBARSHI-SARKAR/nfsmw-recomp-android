/* speed.exe 005689c0 FUN_005689c0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 005faa20 FUN_005faa20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005689c0(int param_1,int param_2,float param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  if (3 < param_2) {
    return;
  }
  if ((param_3 <= _DAT_00890968) || (_DAT_00890fc8 <= param_3)) goto LAB_00568a8b;
  iVar2 = FUN_007c4b80();
  iVar3 = FUN_007c4b80();
  if ((iVar3 < iVar2) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    uVar4 = FUN_005faa20();
    switch(uVar4) {
    case 0:
    case 4:
      iVar3 = 0x19;
      break;
    case 1:
    case 3:
      iVar3 = 0x32;
      break;
    default:
      goto switchD_00568a38_caseD_2;
    }
    if ((iVar2 % iVar3 == 0) &&
       (pfVar1 = (float *)(param_1 + 0x2c + (param_2 * 0x1e + iVar2 / iVar3) * 4),
       *pfVar1 == _DAT_00890968)) {
      *pfVar1 = param_4;
      if (*(int *)(param_1 + 0x10) == 0) {
        bVar5 = param_2 == 1;
      }
      else {
        bVar5 = param_2 == *(int *)(param_1 + 0x10);
      }
      if (bVar5) {
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
    }
  }
switchD_00568a38_caseD_2:
LAB_00568a8b:
  *(float *)(param_2 * 0x78 + 0x28 + param_1) = param_3;
  return;
}

