/* speed.exe 007e3630 __resetstkoflw; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000078 VirtualAlloc
 * calls 007c94b0 __chkstk
 * calls EXTERNAL:00000081 VirtualQuery
 * calls EXTERNAL:0000008d VirtualProtect
 * calls EXTERNAL:0000008e GetSystemInfo
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* Library Function - Single Match
    __resetstkoflw
   
   Library: Visual Studio 2003 Debug */

int __cdecl __resetstkoflw(void)

{
  SIZE_T SVar1;
  int iVar2;
  undefined4 uStack_6c;
  undefined1 *local_68;
  LPCVOID local_64;
  LPCVOID local_60;
  _MEMORY_BASIC_INFORMATION local_5c;
  _SYSTEM_INFO local_40;
  SIZE_T local_1c;
  LPCVOID local_18;
  undefined1 *local_14;
  DWORD local_10;
  LPCVOID local_c;
  DWORD local_8;
  
  uStack_6c = 0x7e3640;
  local_68 = (undefined1 *)&uStack_6c;
  local_14 = (undefined1 *)&uStack_6c;
  SVar1 = VirtualQuery(&uStack_6c,&local_5c,0x1c);
  if (SVar1 == 0) {
    iVar2 = 0;
  }
  else {
    local_64 = local_5c.AllocationBase;
    GetSystemInfo(&local_40);
    local_1c = local_40.dwPageSize;
    local_18 = (LPCVOID)((~(local_40.dwPageSize - 1) & (uint)local_14) - local_40.dwPageSize);
    local_c = (LPCVOID)(((-(uint)(DAT_009baa20 != 1) & 0xfffffff1) + 0x11) * local_40.dwPageSize +
                       (int)local_64);
    if (local_18 < local_c) {
      iVar2 = 0;
    }
    else {
      local_60 = local_18;
      if (DAT_009baa20 != 1) {
        local_60 = local_64;
        do {
          SVar1 = VirtualQuery(local_60,&local_5c,0x1c);
          if (SVar1 == 0) {
            return 0;
          }
          local_60 = (LPCVOID)((int)local_60 + local_5c.RegionSize);
        } while ((local_5c.State & 0x1000) == 0);
        local_60 = local_5c.BaseAddress;
        if ((local_5c.Protect & 0x100) != 0) {
          return 1;
        }
        if (local_18 < local_5c.BaseAddress) {
          return 0;
        }
        if (local_5c.BaseAddress < local_c) {
          local_60 = local_c;
        }
        VirtualAlloc(local_60,local_1c,0x1000,4);
      }
      local_8 = (-(uint)(DAT_009baa20 != 1) & 0x103) + 1;
      iVar2 = VirtualProtect(local_60,local_1c,local_8,&local_10);
    }
  }
  return iVar2;
}

