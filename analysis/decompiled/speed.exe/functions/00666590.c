/* speed.exe 00666590 FUN_00666590; analysis pseudocode, not buildable source.
 * calls 006dfa80 FUN_006dfa80
 * calls 00665fc0 FUN_00665fc0
 * calls 00627860 FUN_00627860
 * calls 007c4b80 FUN_007c4b80
 * calls 0045ce40 FUN_0045ce40
 * calls 0045ce70 FUN_0045ce70
 * calls 007c7250 FUN_007c7250
 * calls 0057ecd0 FUN_0057ecd0
 * calls 00663d30 FUN_00663d30
 * calls 006645c0 FUN_006645c0
 * calls 00665720 FUN_00665720
 * calls 007ca340 __exit
 * calls 006cbc00 FUN_006cbc00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00666590(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  bool bVar6;
  float10 fVar7;
  
  cVar3 = FUN_006cbc00("speed.exe",1);
  if (cVar3 != '\0') {
    __exit(0);
  }
  FUN_00665fc0(param_1,param_2);
  if (DAT_00926064 == 0) {
    FUN_006645c0();
  }
  else {
    FUN_0057ecd0();
  }
  _DAT_009257b4 = 1;
  DAT_00925680 = FUN_0045ce40();
  FUN_00627860(DAT_00925b14);
  iVar2 = DAT_00925680;
  while (DAT_00925680 = iVar2, DAT_009257ec == 0) {
    iVar4 = FUN_0045ce40();
    fVar7 = (float10)FUN_0045ce70(DAT_00925680,iVar4);
    if (((iVar4 == DAT_00925680) ||
        (iVar2 = iVar4, fVar7 < (float10)_DAT_00890968 == (fVar7 == (float10)_DAT_00890968))) &&
       (iVar2 = DAT_00925680, fVar7 < (float10)_DAT_008a7fc8 == (fVar7 == (float10)_DAT_008a7fc8)))
    {
      DAT_00925680 = iVar4;
      uVar5 = FUN_007c4b80();
      FUN_00663d30(uVar5);
      bVar6 = DAT_00925855 != '\0';
      DAT_00925855 = '\0';
      iVar2 = DAT_00925680;
      if (bVar6) {
        DAT_00925855 = '\0';
      }
    }
  }
  FUN_006dfa80(unaff_ESI);
  iVar2 = DAT_00925980;
  if (DAT_00925980 != 0) {
    FUN_00665720();
    FUN_007c7250(iVar2);
  }
  DAT_00925980 = 0;
  __exit(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

