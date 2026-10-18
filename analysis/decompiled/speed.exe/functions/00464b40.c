/* speed.exe 00464b40 FUN_00464b40; analysis pseudocode, not buildable source.
 * calls 00460f80 FUN_00460f80
 * calls 00464ae0 FUN_00464ae0
 * calls 00464a70 FUN_00464a70
 * calls 00464720 FUN_00464720
 */

undefined4 __fastcall FUN_00464b40(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  
  pcVar2 = (char *)FUN_00464ae0();
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    bVar4 = SBORROW1(cVar1,'0');
    if (cVar1 == '0') {
      if (pcVar2[1] == 'x') goto LAB_00464b83;
      bVar4 = false;
    }
    if (((bVar4 == (char)(cVar1 + -0x30) < '\0') && (cVar1 < ':')) || (cVar1 == '-')) {
LAB_00464b83:
      uVar3 = FUN_00460f80(pcVar2);
      return uVar3;
    }
    uVar3 = FUN_00464a70();
    FUN_00464720(param_1,"Expected a number but found %s in %s\n",pcVar2,uVar3);
  }
  return 0;
}

