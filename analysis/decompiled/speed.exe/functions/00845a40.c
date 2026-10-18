/* speed.exe 00845a40 FUN_00845a40; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083af60 FUN_0083af60
 * calls 0083b210 FUN_0083b210
 * calls 0083ffa0 FUN_0083ffa0
 */

void FUN_00845a40(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_2;
  iVar2 = param_1;
  uVar3 = FUN_0083a670(param_2,&DAT_008a458c,0);
  uVar3 = FUN_0083af60(uVar3);
  *(undefined4 *)(iVar2 + 0x20) = uVar3;
  uVar3 = FUN_0083a670(uVar4,&DAT_008c6db8,0);
  uVar3 = FUN_0083af60(uVar3);
  pcVar1 = (char *)(iVar2 + 0x1e0);
  *(undefined4 *)(iVar2 + 0x220) = uVar3;
  uVar4 = FUN_0083a670(uVar4,&DAT_008c6db4,pcVar1,0x40,&DAT_00890978);
  FUN_0083b210(uVar4);
  param_1 = *(int *)(iVar2 + 0x20);
  if ((*pcVar1 == '\0') && (param_1 != 0)) {
    FUN_0083ffa0(pcVar1,&param_1);
  }
  return;
}

