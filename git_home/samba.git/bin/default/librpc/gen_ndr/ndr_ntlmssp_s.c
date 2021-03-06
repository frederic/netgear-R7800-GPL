/* server functions auto-generated by pidl */
#include "bin/default/librpc/gen_ndr/ndr_ntlmssp.h"
#include <util/debug.h>

NTSTATUS dcerpc_server_ntlmssp_init(void);

/* ntlmssp - dcerpc server boilerplate generated by pidl */


static NTSTATUS ntlmssp__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_NTLMSSP_BIND
	return DCESRV_INTERFACE_NTLMSSP_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void ntlmssp__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_NTLMSSP_UNBIND
	DCESRV_INTERFACE_NTLMSSP_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS ntlmssp__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_ntlmssp.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_ntlmssp.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_ntlmssp.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_ntlmssp.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_ntlmssp, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS ntlmssp__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct decode_NEGOTIATE_MESSAGE *r2 = (struct decode_NEGOTIATE_MESSAGE *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_NEGOTIATE_MESSAGE, NDR_IN, r2);
		}
		dcesrv_decode_NEGOTIATE_MESSAGE(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_NEGOTIATE_MESSAGE will reply async\n"));
		}
		break;
	}
	case 1: {
		struct decode_CHALLENGE_MESSAGE *r2 = (struct decode_CHALLENGE_MESSAGE *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_CHALLENGE_MESSAGE, NDR_IN, r2);
		}
		dcesrv_decode_CHALLENGE_MESSAGE(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_CHALLENGE_MESSAGE will reply async\n"));
		}
		break;
	}
	case 2: {
		struct decode_AUTHENTICATE_MESSAGE *r2 = (struct decode_AUTHENTICATE_MESSAGE *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_AUTHENTICATE_MESSAGE, NDR_IN, r2);
		}
		dcesrv_decode_AUTHENTICATE_MESSAGE(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_AUTHENTICATE_MESSAGE will reply async\n"));
		}
		break;
	}
	case 3: {
		struct decode_NTLMv2_CLIENT_CHALLENGE *r2 = (struct decode_NTLMv2_CLIENT_CHALLENGE *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_NTLMv2_CLIENT_CHALLENGE, NDR_IN, r2);
		}
		dcesrv_decode_NTLMv2_CLIENT_CHALLENGE(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_NTLMv2_CLIENT_CHALLENGE will reply async\n"));
		}
		break;
	}
	case 4: {
		struct decode_NTLMv2_RESPONSE *r2 = (struct decode_NTLMv2_RESPONSE *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_NTLMv2_RESPONSE, NDR_IN, r2);
		}
		dcesrv_decode_NTLMv2_RESPONSE(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_NTLMv2_RESPONSE will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_ntlmssp, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS ntlmssp__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct decode_NEGOTIATE_MESSAGE *r2 = (struct decode_NEGOTIATE_MESSAGE *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_NEGOTIATE_MESSAGE replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_NEGOTIATE_MESSAGE, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_NEGOTIATE_MESSAGE\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 1: {
		struct decode_CHALLENGE_MESSAGE *r2 = (struct decode_CHALLENGE_MESSAGE *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_CHALLENGE_MESSAGE replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_CHALLENGE_MESSAGE, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_CHALLENGE_MESSAGE\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 2: {
		struct decode_AUTHENTICATE_MESSAGE *r2 = (struct decode_AUTHENTICATE_MESSAGE *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_AUTHENTICATE_MESSAGE replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_AUTHENTICATE_MESSAGE, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_AUTHENTICATE_MESSAGE\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 3: {
		struct decode_NTLMv2_CLIENT_CHALLENGE *r2 = (struct decode_NTLMv2_CLIENT_CHALLENGE *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_NTLMv2_CLIENT_CHALLENGE replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_NTLMv2_CLIENT_CHALLENGE, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_NTLMv2_CLIENT_CHALLENGE\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}
	case 4: {
		struct decode_NTLMv2_RESPONSE *r2 = (struct decode_NTLMv2_RESPONSE *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_NTLMv2_RESPONSE replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_NTLMv2_RESPONSE, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_NTLMv2_RESPONSE\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_ntlmssp, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS ntlmssp__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_ntlmssp.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static const struct dcesrv_interface dcesrv_ntlmssp_interface = {
	.name		    = "ntlmssp",
	.syntax_id          = {{0x6e746c6d,0x7373,0x700a,{0x00,0x00},{0x00,0x00,0x00,0x00}},0.0},
	.bind		    = ntlmssp__op_bind,
	.unbind		    = ntlmssp__op_unbind,
	.ndr_pull	    = ntlmssp__op_ndr_pull,
	.dispatch	    = ntlmssp__op_dispatch,
	.reply		    = ntlmssp__op_reply,
	.ndr_push	    = ntlmssp__op_ndr_push,
#ifdef DCESRV_INTERFACE_NTLMSSP_FLAGS
	.flags              = DCESRV_INTERFACE_NTLMSSP_FLAGS
#else
	.flags              = 0
#endif
};


static NTSTATUS ntlmssp__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_ntlmssp.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_ntlmssp.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_ntlmssp_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("ntlmssp_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool ntlmssp__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_ntlmssp_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_ntlmssp_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_ntlmssp_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool ntlmssp__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_ntlmssp_interface.name, name)==0) {
		memcpy(iface, &dcesrv_ntlmssp_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_ntlmssp_init(void)
{
	NTSTATUS ret;
	static const struct dcesrv_endpoint_server ep_server = {
	    /* fill in our name */
	    .name = "ntlmssp",

	    /* fill in all the operations */
#ifdef DCESRV_INTERFACE_NTLMSSP_INIT_SERVER
	    .init_server = DCESRV_INTERFACE_NTLMSSP_INIT_SERVER,
#else
	    .init_server = ntlmssp__op_init_server,
#endif
	    .interface_by_uuid = ntlmssp__op_interface_by_uuid,
	    .interface_by_name = ntlmssp__op_interface_by_name
	};
	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'ntlmssp' endpoint server!\n"));
		return ret;
	}

	return ret;
}

