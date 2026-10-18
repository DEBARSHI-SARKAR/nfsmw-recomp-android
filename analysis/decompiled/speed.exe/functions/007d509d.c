/* speed.exe 007d509d FUN_007d509d; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004a GetLastError
 * calls 007cb270 FUN_007cb270
 * calls EXTERNAL:00000055 HeapValidate
 * calls 007cb280 FUN_007cb280
 */

undefined4 FUN_007d509d(void)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  BVar1 = HeapValidate(DAT_009c5318,0,(LPCVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x78) {
      puVar3 = (undefined4 *)FUN_007cb280();
      *puVar3 = 0x78;
      puVar3 = (undefined4 *)FUN_007cb270();
      *puVar3 = 0x28;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0xfffffffc;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

