/* speed.exe 0084b110 FUN_0084b110; analysis pseudocode, not buildable source.
 * calls 0084a840 FUN_0084a840
 * calls 0086218e Ordinal_19
 * calls 00862116 Ordinal_111
 * calls 00862122 Ordinal_21
 * calls 007d6cb0 __security_check_cookie
 * calls 00862188 Ordinal_20
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084a7c0 FUN_0084a7c0
 * calls 0084bd60 FUN_0084bd60
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0084b110(uint param_1,byte *param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  int iStack_c;
  
  pbVar7 = param_2;
  iVar3 = param_1;
  iVar6 = param_3;
  if (*(int *)(param_1 + 0xc) == 3) {
    puVar1 = (undefined4 *)(param_1 + 0x18);
    param_1 = (uint)param_2[8];
    Ordinal_21(*puVar1,0,4,&param_1,4);
    uVar4 = *pbVar7 & 0xf;
    iVar6 = param_3 + uVar4 * -4;
    pbVar7 = pbVar7 + uVar4 * 4;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
  }
  iVar2 = iVar3 + 100;
  param_1 = iVar2;
  FUN_0084bd60(iVar2);
  if (param_5 == 0) {
    Ordinal_19(*(undefined4 *)(iVar3 + 0x18),pbVar7,iVar6,0);
    iStack_c = iVar2;
  }
  else {
    uVar5 = FUN_0084a7c0(param_6);
    Ordinal_20(*(undefined4 *)(iVar3 + 0x18),pbVar7,iVar6,0,uVar5);
  }
  FUN_0084bdf0(iStack_c);
  Ordinal_111();
  FUN_0084a840();
  return;
}

