/* speed.exe 00843610 FUN_00843610; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0085e770 _strtol
 * calls 0083b110 FUN_0083b110
 * calls 008421c0 FUN_008421c0
 */

undefined4 FUN_00843610(undefined4 *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  char *pcVar5;
  char local_10 [16];
  
  pcVar5 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar5 = local_10;
  }
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  pcVar5[8] = '\0';
  pcVar5[9] = '\0';
  pcVar5[10] = '\0';
  pcVar5[0xb] = '\0';
  pcVar5[0xc] = '\0';
  pcVar5[0xd] = '\0';
  pcVar5[0xe] = '\0';
  pcVar5[0xf] = '\0';
  if ((undefined1 *)param_1[0x487] != (undefined1 *)param_1[0x488]) {
    *(undefined1 *)param_1[0x488] = 0x25;
  }
  if (((param_3 != (char *)0x0) && (*param_3 != '\0')) && (*param_3 != '$')) {
    iVar1 = FUN_008421c0(param_1,*param_1,param_3);
    iVar2 = FUN_008421c0(param_1,iVar1,"$rsrc");
    if ((iVar1 != 0) && (iVar2 != 0)) {
      uVar3 = FUN_0083a670(iVar1,&DAT_008b6f04,0);
      uVar3 = FUN_0083b110(uVar3);
      *(undefined4 *)pcVar5 = uVar3;
      *(int *)(pcVar5 + 8) = iVar1;
      lVar4 = _strtol((char *)(iVar2 + 2),&param_2,0x10);
      *(long *)(pcVar5 + 4) = lVar4;
      *(int *)(pcVar5 + 0xc) = iVar2 + 0xc;
    }
  }
  if ((undefined1 *)param_1[0x487] != (undefined1 *)param_1[0x488]) {
    *(undefined1 *)param_1[0x488] = 0;
  }
  return *(undefined4 *)pcVar5;
}

