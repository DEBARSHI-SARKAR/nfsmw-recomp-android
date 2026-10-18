/* speed.exe 00586050 FUN_00586050; analysis pseudocode, not buildable source.
 * calls 007e89d0 FUN_007e89d0
 * calls 00569bf0 FUN_00569bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00586050(uint param_1,undefined4 param_2,byte param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (ushort)param_1;
  if ((((param_3 & 0x20) == 0) && ((uVar1 == 10 || (uVar1 == 0x5e)))) || (uVar1 == 0xd)) {
    return (float10)_DAT_00890968;
  }
  if (0xff7f < uVar1) {
    param_1 = param_1 & 0xff;
  }
  sVar2 = (short)param_1;
  if (sVar2 == 0x99) {
    param_1 = 0x2122;
  }
  else if (sVar2 == 0x9c) {
    param_1 = 0x153;
  }
  else if (sVar2 == 0xa0) {
    param_1 = 0x20;
  }
  if (((char)param_3 < '\0') && ((short)param_1 == 0xa0)) {
    param_2 = 0;
    param_1 = 0x20;
  }
  iVar3 = FUN_00569bf0(param_1);
  if (iVar3 != 0) {
    if ((short)param_2 == 0) {
      return (float10)0.0 + (float10)(int)*(short *)(iVar3 + 0xe);
    }
    iVar4 = FUN_007e89d0(iVar3,param_2);
    return (float10)iVar4 + (float10)(int)*(short *)(iVar3 + 0xe);
  }
  return (float10)_DAT_00890968;
}

