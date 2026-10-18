/* speed.exe 00843fa0 FUN_00843fa0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083af60 FUN_0083af60
 * calls 0083b210 FUN_0083b210
 * calls 00842130 FUN_00842130
 */

undefined4 FUN_00843fa0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = param_1 + 0x210;
  puVar5 = param_2;
  for (iVar4 = 0x47; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar1 = FUN_0083a670(iVar2,"TITLE",param_2,0x40,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"IMAGE",param_2 + 0x10,0x20,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"NEWS-RGB",0);
  iVar2 = FUN_0083af60(uVar1);
  *(char *)(param_2 + 0x45) = (char)((uint)iVar2 >> 0x10);
  cVar3 = (char)((uint)iVar2 >> 0x18);
  *(char *)((int)param_2 + 0x117) = cVar3;
  *(char *)((int)param_2 + 0x115) = (char)((uint)iVar2 >> 8);
  *(char *)((int)param_2 + 0x116) = (char)iVar2;
  if ((iVar2 != 0) && (cVar3 == '\0')) {
    *(undefined1 *)((int)param_2 + 0x117) = 0xff;
  }
  FUN_00842130(param_1,param_2 + 0x18,1);
  FUN_00842130(param_1,(int)param_2 + 0x8d,2);
  FUN_00842130(param_1,(int)param_2 + 0xba,3);
  FUN_00842130(param_1,(int)param_2 + 0xe7,4);
  return *(undefined4 *)(param_1 + 0x121c);
}

