/* speed.exe 00512bc0 FUN_00512bc0; analysis pseudocode, not buildable source.
 * calls 0056e320 FUN_0056e320
 * calls 00598970 FUN_00598970
 * calls 0056e360 FUN_0056e360
 * calls 0056bc10 FUN_0056bc10
 */

undefined4 __fastcall FUN_00512bc0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)FUN_0056e320();
  if (*pcVar2 != '\0') {
    pcVar2 = (char *)FUN_0056e360();
    if (*pcVar2 != '\0') {
      return 1;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0056bc10(0x9da1f76d);
  FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar3);
  return 0;
}

