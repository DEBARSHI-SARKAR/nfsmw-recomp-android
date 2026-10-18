/* speed.exe 007995d0 FUN_007995d0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 00460d20 FUN_00460d20
 * calls 00840c60 FUN_00840c60
 * calls 007ec1bd FUN_007ec1bd
 * calls 0056e340 FUN_0056e340
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 * __thiscall FUN_007995d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  puVar4 = (undefined4 *)0x0;
  uVar2 = FUN_0056e340();
  iVar3 = FUN_00460d20(param_2,uVar2);
  if (iVar3 == 0) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    iVar3 = FUN_00794f80();
    if (*(int *)(iVar3 + 0x38) == 0) {
      return (undefined4 *)0x0;
    }
    iVar3 = FUN_00794f80(0x73656c66);
    puVar4 = (undefined4 *)FUN_00840c60(*(undefined4 *)(iVar3 + 0x38));
    return puVar4;
  }
  puVar1 = (undefined4 *)*param_1;
  do {
    if (puVar1 == param_1) {
LAB_00799686:
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return puVar4;
    }
    iVar3 = FUN_00460d20(puVar1 + 4,param_2);
    if ((iVar3 == 0) && (puVar1[0x93] == 0)) {
      puVar4 = puVar1 + 2;
      goto LAB_00799686;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

