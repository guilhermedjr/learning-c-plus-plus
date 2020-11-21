#include <rpc.h>
#include <tchar.h>

#pragma comment(lib, "Rpcrt4.lib")

static bool _tmain(int argc, _TCHAR* argv[])
{
	UUID uuid;
	RPC_STATUS ret_val = ::UuidCreate(&uuid);

	if (ret_val == RPC_S_OK)
	{
		WCHAR* wszUuid = NULL;
		::UuidToStringW(&uuid, (RPC_WSTR*)&wszUuid);

		if (wszUuid != NULL)
		{
			//TODO: do something with wszUuid

			//free up the allocated string

			::RpcStringFreeW((RPC_WSTR*)&wszUuid);
			wszUuid = NULL;
		}

		else {}

		return true;
	}
	return false;
}