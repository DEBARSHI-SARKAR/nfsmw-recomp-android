/* speed.exe 0077beb0 FUN_0077beb0; analysis pseudocode, not buildable source.
 * calls 0077b720 FUN_0077b720
 * calls 00774150 FUN_00774150
 * calls 0077bcd0 FUN_0077bcd0
 * calls 00777d30 FUN_00777d30
 */

void __thiscall
FUN_0077beb0(int param_1,undefined4 param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  uVar1 = param_3;
  param_1 = param_1 + 0x98;
  iVar2 = (short)param_2 * 0x16 + DAT_009b38c0;
  fVar3 = (float10)FUN_00774150(iVar2,param_3,param_1,1);
  param_3 = (float)fVar3;
  if ((*(byte *)(iVar2 + 0xb) & 1) != 0) {
    FUN_0077b720(iVar2,param_3,param_1);
    FUN_0077bcd0(uVar1,param_1,&param_3,0x3f800000,(int)*(short *)(iVar2 + 8));
    FUN_0077bcd0(uVar1,param_1,&param_3,0x3e800000,(int)*(short *)(iVar2 + 8));
  }
  FUN_00777d30(param_2,param_3,uVar1,param_4,param_5);
  return;
}

