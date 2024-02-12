#pragma once

#define CLIENT_DATA_FOLDER "cdata"

namespace updater
{
	enum git_branch
	{
		branch_develop,
		branch_main,
		branch_count
	};

	std::optional<std::string> get_server_file(const std::string& endpoint);

	void relaunch();

	void set_has_tried_update(bool tried);
	bool get_has_tried_update();
	bool auto_updates_enabled();

	bool is_update_available();
	bool is_update_check_done();
	bool get_update_check_status();

	bool is_update_download_done();
	bool get_update_download_status();

	bool is_restart_required();

	std::string get_last_error();
	std::string get_current_file();

	void start_update_check();
	void start_update_download();
	void cancel_update();

	bool should_force_update();

	bool is_valid_git_branch(const std::string& branch);
	std::string get_git_branch();
	git_branch get_current_branch();
	void set_branch(const git_branch branch);
}