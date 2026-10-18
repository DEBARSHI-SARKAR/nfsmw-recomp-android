/* speed.exe 007f010b FUN_007f010b; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000026 DeleteFileA
 */

bool FUN_007f010b(LPCSTR param_1)

{
  BOOL BVar1;
  
  BVar1 = DeleteFileA(param_1);
  return BVar1 == 1;
}

