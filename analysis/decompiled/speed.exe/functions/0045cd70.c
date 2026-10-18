/* speed.exe 0045cd70 FUN_0045cd70; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000049 CreateProcessA
 * calls EXTERNAL:0000004a GetLastError
 */

DWORD FUN_0045cd70(LPSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  _STARTUPINFOA *p_Var4;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
  p_Var4 = &local_44;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    p_Var4->cb = 0;
    p_Var4 = (_STARTUPINFOA *)&p_Var4->lpReserved;
  }
  local_44.cb = 0x44;
  BVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0,(LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_54);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}

